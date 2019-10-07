#include <stdio.h>
#include <stdlib.h>

int main()
{   FILE *f = fopen("fisier.txt","w");
    int **m;
    int n,i,j,a=0;
    scanf("%d", &n);
    m= (int**) malloc(n *sizeof(int *));

    for(i=0;i<n;i++)
        m[i]= (int *) malloc((i+1) * sizeof(int));
    for(i=0;i<n;i++)
    {for(j=0;j<i+1;j++)
    {  m[i][j]=++a;
        fprintf(f,"%d ", m[i][j]);

    }
    fprintf(f,"\n");
    }
    for(i=0;i<n;i++)
    {free(m[i]);
    free(m);}
   fclose(f);
    return 0;
}
