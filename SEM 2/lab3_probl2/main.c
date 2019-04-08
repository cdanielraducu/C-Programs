#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

char* concat1(char* x,...){
    va_list lp;
    va_start(lp,x);
    int i; char *aux,*arg;
    aux = (char*)malloc(strlen(x)+1);
    strcpy(aux,x);

        arg = va_arg(lp,char*);
    while(arg!=NULL){
        aux = realloc(aux,strlen(arg)+strlen(aux)+1);
        strcat(aux,arg);
        arg = va_arg(lp,char*);
    }
    return aux;
}

int main()
{   char *s;
    s = concat1("Test"," Text"," Tedt",NULL);
    printf("%s\n",s);
    return 0;
}
