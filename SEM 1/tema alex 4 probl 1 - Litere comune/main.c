#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c1[100],c2[100];
    scanf("%s",c1);
    scanf("%s",c2);
    int i,j;
    for(i=0;i<strlen(c1);i++)
    {
        if(strchr(c2,c1[i]) != NULL)
        {
            printf("%c",c1[i]);
        }
    }

    return 0;
}
