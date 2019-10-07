#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n;
    scanf("%d ", &n);
    char ** A = (char **) malloc(sizeof(char*)*(n-1));

    for(i=0; i<n-1; i++)
        A[i] = (char *) malloc(sizeof(char)*(i+1));

    for(i=0; i<n-1; i++)
        for(j=0; j<i+1; j++)
            scanf("%c", &A[i][j]);

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<i+1; j++)
            printf("%c ", A[i][j]);
        printf("\n");
    }
    return 0;
}
