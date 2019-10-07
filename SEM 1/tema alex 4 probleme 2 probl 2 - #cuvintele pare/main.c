#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
     char c[100];
    gets(c);
    char *p[100];
    int i=0;

    p[i] = strtok(c," ");
    while(p[i] != NULL)
    {
        printf("%s\n",p[i]);
        i++;
        p[i] = strtok(NULL," ");

    }

   int  n=i,s=0;
    for(i=0;i<n;i++)
        if(strlen(p[i])%2 ==0) {
             *p[i]='#';
             *(p[i]+1)='\0';   }
    for(i=0;i<n;i++)
        printf("%s ",p[i]);


    return 0;
}
