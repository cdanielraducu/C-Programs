#include <stdio.h>
#include <stdlib.h>

int main()
{
    //alocare matrici
    int n=3,i,j;
    int **a=(int**)malloc(3*sizeof(int*));
    for(i=0; i<3; i++)
        a[i]=(int*)malloc(i+1*sizeof(int));

    int **b=(int**)malloc(3*sizeof(int*));
    for(i=0; i<3; i++)
    {
        b[i]=(int*)malloc((3-i)*sizeof(int));
    }

    int **p=(int**)calloc(3,sizeof(int*));
    for(i=0; i<3; i++)
    {
        p[i]=(int*)calloc(3,sizeof(int));
    }
    //introducerea datelor
    for(i=0; i<3; i++)
    {
        for(j=0; j<i+1; j++)
        {
            a[i][j]=1;
        }
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<i+1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    n=3;
    for(i=0; i<3; i++)
    {
        for(j=0; j<n; j++)
        {
            b[i][j]=3;
        }
        n--;
    }
    n=3; int h;
    for(i=0; i<3; i++)
    {
       for (h=0; h<i; h++)
            printf("  ");
        for(j=0; j<n; j++)
        {

            printf("%d ",b[i][j]);
        }
        n--;
        printf("\n");
    }

    //produsul
    int k;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
                p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
        }
    }
    n=3;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",p[i][j]);
        }
        n--;
        printf("\n");
    }

    return 0;
}
/*
int k; int auxi;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){auxi=minn(i,j);
        for(k=0;k<auxi;k++)
        p[i][j]+=a[i][k]*b[k][j-k];}
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
            printf("%d ",p[i][j]);
*/
