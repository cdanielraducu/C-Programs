#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char c[100];
    int i,j,aux=0;
    gets(c);
    char *p;
    p = strtok(c," ");
    while(p != NULL)
    {   for(j=0; j<strlen(p); j++)
                {for(i=0;i<strlen(p)-1;i++)
                    if(p[i+1]<=p[i])
                    {
                        aux=p[i];
                        p[i]=p[i+1];
                        p[i+1]=aux;
                    }}
                    printf("%s ",p);
     p = strtok(NULL," ");

    }
    return 0;
}
