#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[20][20];
    int i,j,n1,n2;
    scanf("%d %d", &n1, &n2);
    for(j=0;j<n2;j++)
    {
        for(i=0;i<n1;i++)
        {scanf("%d", &v[i][j]);}
    }
    printf(" spirala matricei este: \n");
    for(j=0;j<1;j++)
     for(i=0;i<n1;i++)
        printf("%d,  ", v[i][j]);
 for(j=1;j<2;j++)
     for(i=2;i<n1;i++)
        printf("%d,  ", v[i][j]);
for(j=2;j<3;j++)
     for(i=2;i<n1;i++)
        printf("%d,  ", v[i][j]);
 for(j=2;j<3;j++)
     for(i=1;i<2;i++)
        printf("%d,  ", v[i][j]);
 for(j=2;j<3;j++)
     for(i=0;i<1;i++)
        printf("%d,  ", v[i][j]);
for(j=1;j<2;j++)
     for(i=0;i<1;i++)
        printf("%d,  ", v[i][j]);


    return 0;
}
