#include <stdio.h>
#include <stdlib.h>

citeste(int **m)
{
    int n,i,j,a=0;
    scanf("%d", &n);
    m= (int**) malloc(n *sizeof(int *));

    for(i=0;i<n;i++)
        m[i]= (int *) malloc((i+1) * sizeof(int));
    for(i=0;i<n;i++)
    {for(j=0;j<i+1;j++)
    {  m[i][j]=++a;
        printf("%d ", m[i][j]);

    }
    printf("\n");
    }
}
int main()
{   int **m;

    citeste(m);
    return 0;
}
