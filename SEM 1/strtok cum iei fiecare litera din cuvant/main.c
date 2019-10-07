#include <stdio.h>
#include <stdlib.h>

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
        p[i]=strtok(NULL," ");
    }
    int n=i; int j;
    printf("%c",*(p[2]+2));

    return 0;
}
