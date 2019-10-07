#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[20][20];
    int i,j,n1,n2,aux=0;
    scanf("%d %d", &n1, &n2);
    for(j=0;j<n2;j++)
    {
        for(i=0;i<n1;i++)
        {scanf("%d", &v[i][j]);}
    }
    printf(" matricea este: \n");

    while(j=1)
     {for(i=0;i<n1;i++)
      { printf("%d", v[i][j]);}
       j++;
     }
    return 0;
}
