#include <stdio.h>
#include <stdlib.h>

int** citire()
{ int n,m;
//n linii si m coloane
scanf("%d %d",&n,&m);
   int **v=(int*)malloc(sizeof(int*)*n);
    int i,j,*y;
    for(i=0; i<n; i++)
        v[i] = (int*)malloc(sizeof(int)*m);
    printf("dati valori pt matrice\n");
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            scanf("%d",&v[i][j]);
    printf("INAINTE\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d ",v[i][j]);
        printf("\n");
    }
    citirev(&y,n);
    int col,k=0;
    for(k=0; k<n; k++)
        printf("%d ",y[k]);
    printf("\n");
    printf("de pe ce coloana sa se inlocuiasca\n");
    scanf("%d",&col);
    i=col-1;
    for(j=0; j<n; j++)
           v[j][i]=y[j];

    printf("DUPA\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            printf("%d ",v[i][j]);
        printf("\n");
    }

    return v;
}

void citirev(int **p,int n)
{
    int k;
    int *y = (int*)malloc(sizeof(int)*n);
    printf("dati valori pentru vector\n");
    for(k=0; k<n; k++)
        scanf("%d",&y[k]);
    *p=y;
}

int main()
{
    int **v;
    v=citire();
    return 0;
}
