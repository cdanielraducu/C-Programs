#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10][10]; int n,m;
    scanf("%d %d",&n,&m);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d ",&v[i][j]);
        }
    }
    int k,q,l; int c[3][3];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            for(k=0;k<n;k++)
            c[i][j] += v[i][k]* v[k][j];
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    return 0;
}
