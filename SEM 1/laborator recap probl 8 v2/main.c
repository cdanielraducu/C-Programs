#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    scanf("%d", &n);
    int **matrice_1, **matrice_2, **produs;
    matrice_1 = malloc(n*sizeof(int *));

    for(i = 0 ; i < n ; i++)
        matrice_1[i] = malloc((i+1)*sizeof(int *));

    matrice_2 = malloc(n*sizeof(int *));
    for(i = 0 ; i < n ; i++)
        matrice_2[i] = malloc((n-i)*sizeof(int));
    produs = calloc(n,sizeof(int *));
    for(i = 0 ; i < n ; i++)
        produs[i] = calloc(n,sizeof(int));
    //matrice_2 = malloc(n*sizeof(int*));
    //for(int i = 0 ; i < n ; i++)
    //matrice_2[i] = malloc((n-i)*sizeof(int));
    for( i = 0 ; i < n ; i++)
        for(j = 0 ; j <= i ; j++)
            scanf("%d", &matrice_1[i][j]);
    for(i = 0 ; i < n ; i++)
        for(j = i ; j < n ; j++)
            scanf("%d", &matrice_2[i][j]);
    //for(int i = n-1 ; i >= 0 ; i--)
    //for(int j = 0 ; j < n - i ; j++)
    //scanf("%d", &matrice_2[i][j]);
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j <= i ; j++)
            printf("[%d][%d]=%d ", i, j, matrice_1[i][j]);
        printf("\n");
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j = i ; j < n ; j++)
            printf("[%d][%d]=%d ", i, j, matrice_2[i][j]);
        printf("\n");
    }
    for(i = 0 ; i < n ; i++)
        for( j = 0 ; j < n ; j++)
            for(k = 0 ; k < n ; k++)
                produs[i][j] += matrice_1[i][k]*matrice_2[k][j];
    //for(int i = 0 ; i < n ; i++)
    for(i = 0 ; i < n ; i++)
        for(j = 0 ; j < n ; j++)
            printf("[%d][%d]=%d ", i, j, produs[i][j]);
    printf("\n");
    return 0;
}
