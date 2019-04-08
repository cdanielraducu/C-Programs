#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **v,n,i,j;
    scanf("%d",&n);
    v = (int**)malloc(sizeof(int*)*((n*2)-1));
    int x=n;
    for(i=0;i<n;i++){
        v[i] = (int*)malloc(sizeof(int)*(x--));
    }
    x=1;
    for(i=n;i<n*2-1;i++){
        v[i]=(int*)malloc(sizeof(int)*x++);
    }
    int M=n;
    for(i=0;i<n;i++){
        for(j=0;j<M;j++){
            v[i][j]=M;
        }
    M--;
    }M=2;
    for(i=n;i<n*2-1;i++){
        for(j=0;j<M;j++){
            v[i][j]=M;
        }
    M++;
    }
    //afisare
    int k=n;
    for(i=0;i<n;i++){
        for(j=0;j<k;j++){
            printf("%d  ",v[i][j]);
        }
        printf("\n\n");
        k--;
    }
    k=2;
    for(i=n;i<n*2-1;i++){
        for(j=0;j<k;j++){
            printf("%d  ",v[i][j]);
        }
        printf("\n\n");
        k++;
    }
    return 0;
}
