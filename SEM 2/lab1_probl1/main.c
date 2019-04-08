#include <stdio.h>
#include <stdlib.h>

int prim(int n){
    int i; int ok = 0;
    for(i=2;i<=n/2;i++){
        if(n%i==0) return ;
    }
    return 1;
}

int main()
{   int n;
    scanf("%d",&n);
    int x = prim(n);
    if(x==1) printf("%d este prim",n);
    else printf("%d nu este prim",n);
    return 0;
}
