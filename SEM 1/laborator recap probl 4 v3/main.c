#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int l,c,x;
    short int ok;
}triunghi[100];


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

    triunghi tr1; h=0;
    for(i=0;i<3;i++0){
        for(j=0;j<i+1;j++){
            tr1[h].c=j;
            tr1[h].x=a[i][j];
        }
    tr1[h].l=i;
    }
    triunghi tr2; h=0;
    for(i=0;i<3;i++0){
        for(j=0;j<i+1;j++){
            tr1[h].c=j;
            tr1[h].x=a[i][j];
        }
    tr2[h].l=i;
    }


    return 0;
}
