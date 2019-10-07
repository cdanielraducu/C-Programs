#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,h;
    int v[20][20];
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
            scanf("%d",&v[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {for(h=0;h<i;h++)
        printf("  ");
    for(j=0;j<2;j++){
        if(i==4 && j==1) break;
        else
        printf("%d ",v[i][j]);
        }
    printf("\n");
    }
    int x[2],y[5]={0};
    int k;
    printf("\n");
    fflush(stdin);
    for(k=0;k<2;k++)
        scanf("%d",&x[k]);
    for(i=0;i<5;i++){
        for(j=0;j<2;j++){
                if(j=1 && i ==4) break;
                else
                y[i]+=v[i][j]*x[j];

        }
    }
    for(i=0;i<4;i++)
        printf("%d",y[i]);
    return 0;
}
