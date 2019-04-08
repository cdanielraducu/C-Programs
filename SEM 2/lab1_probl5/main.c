#include <stdio.h>
#include <stdlib.h>

int prim(int n){
    int i;
    if(n<2) return 0;
    for(i=2;i<n/2;i++)
        if(n%i==0) return 0;
    return 1;
}
//descompunere in factori primi
int main()
{
    int n,p,d=2;
    scanf("%d",&n);
    while(n!=1){
            p=0;
        if(n%d==0)
            while(n%d==0){
                n=n/d;
                p++;
            }
            printf("%d^%d ",d,p);
            d++;
    }
    return 0;
}

