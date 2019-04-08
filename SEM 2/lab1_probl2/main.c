#include <stdio.h>
#include <stdlib.h>

int prim(int n){
    int i; int ok = 0;
    if(n<2) return 0;
    for(i=2;i<=n/2;i++){
        if(n%i==0) return 0;
    }
    return 1;
}

void functie(int x){
    int i=x,ok=1;
    while(ok){
        i--;
        if(prim(i)==1){
            ok=0;
            printf("%d\n",i);
        }
    }
    int j=x; ok = 1;
    while(ok){
        j++;
        if(prim(j)==1){
            ok=0;
            printf("%d\n",j);
        }
    }
    printf("%d",j-i);
}

int main()
{
    int x;
    scanf("%d",&x);
    functie(x);
    return 0;
}
