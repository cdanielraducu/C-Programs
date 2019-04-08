#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f=fopen("fisier.txt","r");
    int x,a,b,p,u;
    while(fscanf(f,"%d",&x)!=-1){
        a=x;b=x;
        u=b%10;
        while(a>9){
                a=a/10;
        }
        printf("%d\n",a);
        if(u==a) printf("%d e bun\n\n",x);
        else printf("%d nu e bun\n\n",x);
    }
    return 0;
}
