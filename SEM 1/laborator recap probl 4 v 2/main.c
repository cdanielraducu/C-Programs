#include <stdio.h>
#include <stdlib.h>

void adaugare(int **a){
    int l,k,y; printf("ce schimbari?\n");
    scanf("%d %d %d",&l,&k,&y); l--; k--;
    a[l][k]=y;
}

void inm(int **p,int **a,int **b){
    int i,j,k;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            for(k=0;k<3;k++)
                p[i][j]=p[i][j]+(a[i][k]*b[k][j]);
        }
    }
}

int main()
{
    int **a=(int**)calloc(3,sizeof(int*));
    int **b=(int**)calloc(3,sizeof(int*));
    int i,j,k;
    int **p=(int**)calloc(3,sizeof(int*));
    for(i=0;i<3;i++){
        a[i]=(int*)calloc(3,sizeof(int));
        b[i]=(int*)calloc(3,sizeof(int));
        p[i]=(int*)calloc(3,sizeof(int));
    }
    for(i=0;i<3;i++){
        adaugare(a);
    }
    for(i=0;i<3;i++){
        adaugare(b);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
    printf("\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
    printf("\n");
    }
    inm(p,a,b);
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",p[i][j]);
        }
    printf("\n");
    }
    return 0;
}
