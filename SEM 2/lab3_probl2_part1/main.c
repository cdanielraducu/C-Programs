#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char* concat1(int n,...){
    va_list lp;
    va_start(lp,n);
    int i; char *aux,*arg;
    aux = (char*)malloc(1);
    strcpy(aux,"");
    for(i=0;i<n;i++){
        arg = va_arg(lp,char*);
        aux = realloc(aux,strlen(arg)+strlen(aux)+1);
        strcat(aux,arg);
    }
    return aux;
}

int main()
{   char *s;
    s = concat1(3,"Test"," Text"," Tedt");
    printf("%s\n",s);
    return 0;
}
