#include <stdio.h>
#include <stdlib.h>

int f(int n,int *v){
    if(n==1) return v[0];
    } else if(n>1){
        if(n%2==1) return f(n-1,v)+v[n-1];
        {else return f(n-1,v) - v[n-1];

    }
}

int main()
{
    int n,i;
    scanf("%d",&n);
    int *v=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&v[i]);
    printf("%d",f(n,v));
    return 0;
}
