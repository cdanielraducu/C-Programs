#include <stdio.h>
#include <stdlib.h>
//cum pot sa o fac pentru mai multe cazuri?
int main()
{
    int **v,n,i,j;
    scanf("%d",&n);
    v = (int**)malloc(sizeof(int*)*n);
    for(i=0;i<n;i++){
        v[i]=(int*)malloc(sizeof(int)*n);
    }
    int min=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i<j) min = i;
            else min = j;
            v[i][j] = min;
        }
    }
    //afisare
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }

    return 0;
}
