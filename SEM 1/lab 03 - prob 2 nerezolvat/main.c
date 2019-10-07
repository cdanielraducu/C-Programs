#include <stdio.h>
#include <stdlib.h>

int main()
{   //nu merge pentru toate cazurile8
    int v[100],n,i,j,aux=0;
    scanf("%1d", &n);
    for(i=0;i<n;i++)
    {
         scanf("%d", &v[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d", v[i]);
    }
    printf("\n");
    for(j=0;j<n;j++)
    for(i=0;i<n-1;i++)
    {
     if(v[i]>v[i+1])
     {
         aux=v[i];
         v[i]=v[i+1];
         v[i+1]=aux;
     }
    }
    for(i=0;i<n;i++)
    printf("%d", v[i]);
    return 0;
}
