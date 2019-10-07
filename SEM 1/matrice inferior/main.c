#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f=fopen("fis.txt","r");
    int i,j,n,m;
    int **v;
    fscanf(f,"%d",&n);
    fscanf(f,"%d\n",&m);
    v = (int**)malloc(n*sizeof(int*));
    for(i=0; i<n; i++)
        v[i] = (int*)malloc(m*sizeof(int));
    for(j=0; j<m; j++)
        {for(i=0; i<n; i++)
        {
            fscanf(f,"%d",&v[i][j]);
        }
        fgetc(f);
        }
    for(j=0; j<m; j++)
    {
        for(i=0; i<n; i++)
        {
            printf("%d ",v[i][j]);
        }
        printf("\n");
    }
    fclose(f);


    FILE *g = fopen("fis2.txt","w+");
    for(j=0; j<m; j++)
    {
        for(i=0; i<j+1; i++)
        {
            printf("%d\n",v[i][j]);
            fprintf(g,"%d ",v[i][j]);
            //return 0;
        }
    fprintf(g,"\n");
    }
    fclose(g);
    return 0;
}
