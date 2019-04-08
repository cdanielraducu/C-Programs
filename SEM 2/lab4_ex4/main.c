#include <stdio.h>
#include <stdlib.h>

int maxim(a,b){
if(a>b) return a;
else return b;
}

void max(int *v,int n,int *x){
    if(n==1){ *x= v[0];
    } else if(n>1){
            max(v,n-1,x);
            *x = maxim(*x,v[n-1]);
    }
}

int main()
{
    int i,n,x=0;
    scanf("%d",&n);
    int *v = (int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    max(v,n,&x);
    printf("%d",x);
    return 0;
}
