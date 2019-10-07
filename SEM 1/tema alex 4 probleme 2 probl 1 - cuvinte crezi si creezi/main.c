#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char c[100];
    gets(c);
    char *p[100];
    char *cuv;
    int i=0;
    p[i] = strtok(c," ");
    while(p[i] != NULL)
    {
        i++;
        p[i] = strtok(NULL," ");

    }
    int n=i,k,j;
    for(i=0; i<n; i++)
        printf("%s\n",p[i]);
    for(i=0; i<n; i++)
    {

        cuv = (char*)malloc(strlen(p[i]));
        strcpy(cuv,p[i]);
        if(strlen(cuv)%2!=0)
        {  cuv = (char*)realloc(cuv,strlen(p[i])+1);
            cuv[strlen(cuv)+1] = '\0';
            int len = strlen(cuv);
            for(j=len; j>len/2; j--)
            {
                cuv[j]=cuv[j-1];

            }
            for(k=0; k<n; k++)
            {

                if(strcmp(cuv,p[k]) == 0)
                    printf("DA\n");
            }

        }
    }
    return 0;
}
