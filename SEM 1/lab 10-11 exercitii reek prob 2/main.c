#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strnlen(char *c,int n)
{  int i;
    for(i=0;i<strlen(c);i++)
        n++;
    printf("%d",n);
}

int main()
{
    int c[10],l=0;
    gets(c);
    printf("%s\n",c);
    my_strnlen(c,l);
    return 0;
}
