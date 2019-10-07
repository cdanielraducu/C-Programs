#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char c[100];
    int i,n,l=0,j,aux=0;
    scanf("%s",c);
    n=strlen(c);
    for(j=0; j<n; j++)
                {for(i=l; i>=0; i--)
                    if(c[i+1]>c[i])
                    {
                        aux=c[i];
                        c[i]=c[i+1];
                        c[i+1]=aux;
                    }
                    l++;
                    }

    for(i=0;i<strlen(c);i++)
    printf("%c",c[i]);

    return 0;
}
