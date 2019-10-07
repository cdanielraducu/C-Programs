#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,v[100],j,aux=0,p,N;
    scanf("%ld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &v[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d", v[i]);
    }
    printf("\n");
    for(j=0; j<n; j++)
    {for(i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
               {aux=v[i];
            v[i]=v[i+1];
            v[i+1]=aux;
        }}
    }

    for(i=0; i<n; i++)
        printf("%d", v[i]);

    printf("\ndati valori( mai mici de %d ):",n);
    scanf("%d",&p);
    printf("x1= %d\n", p);
    scanf("%d", &N);
    printf("x2= %d\n", N);
    for(i=p;i<N;i++)
{
    printf(" %d", v[i]);
}
    return 0;
}
