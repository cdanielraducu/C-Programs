#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d ",&n);
    char **v=(char**)malloc(sizeof(char*)*(n-1));
    for(i=0; i<n-1; i++)
        v[i]=(char*)malloc(sizeof(char)*(i+1));
    for(i=0; i<n-1; i++)
        for(j=0; j<i+1; j++)
            {scanf("%c",&v[i][j]);
            //printf("%d %d",i,j);
            }
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<i+1; j++)
            printf("%c",v[i][j]);
        printf("\n");
    }
    return 0;
}
