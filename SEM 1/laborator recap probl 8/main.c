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
    for(i=0; i<30; i++)
    {
        b[i]=(int*)malloc((n-i)*sizeof(int));
    }

    int **p=(int**)malloc(3*sizeof(int*));
    for(i=0; i<3; i++)
    {
        p[i]=(int*)malloc(3*sizeof(int));
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
    n=3;
    for(i=0; i<3; i++)
    {
//        for (int h=1; h<i-1; h++)
//            printf(" .");
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
        for(j=0; j<i+1; j++)
        {
            p[i][j]=0;
            for(k=0; k<i+3; k++)
                p [i][j]=p[i][j]+(a[i][k]*b[k][j]);
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
