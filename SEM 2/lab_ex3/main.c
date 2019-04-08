#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("fisier.txt","r");
    int n,m,i,j;
    fscanf(f,"%d",&n);
    fscanf(f,"%d",&m);
    printf("%d %d\n",n,m);
    int **v= (int**)malloc(sizeof(int*)*n);
    for(i=0; i<n; i++)
    {
        v[i] = (int*)malloc(sizeof(int)*m);
    }
    int a;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            fscanf(f,"%d",&a);
            v[i][j] = a;
        }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    int x;
    fscanf(f,"%d",&x);
    printf("%d",x);
    i=0;
    j=m-1;
    int ok =1;
    while(ok && i>=0 && j>=0 && i<n && j<m){
        if(v[i][j]>x)
            j--;
        else if(v[i][j]==x){
            printf(" s-a gasit\n");
            ok = 0;
            break;

        }else
              i++;
    }
    if(ok==1){
        printf(" nu s-a gasit \n");

    }





    return 0;
}
