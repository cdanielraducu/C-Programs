#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void my_strcpy(char *c,char *b)
{
    int i;
    for(i=0;i<=strlen(b);i++)
    {
        c[i] = b[i];
    }
    printf("%s",c);
}
void my_strcat(char *c,char *b)
{
    int i,l;
    c[strlen(c)+2]='\0';
    c[strlen(c)]=' ';
    c[strlen(c)]=' ';
    l=strlen(c);
    for(i=strlen(c);i<strlen(c)+strlen(b);i++)
    {
        c[i] = b[i-l];
    }
    printf("%s",c);
}
int main()
{
    char c[20],b[20];
    scanf("%s",c);
    printf("%s\n",c);
    scanf(" %s",b);
    printf("%s\n",b);
    my_strcat(c,b);

    return 0;
}
