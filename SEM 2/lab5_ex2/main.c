#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    if(n%3==0){
        a = n/3;
        b = n/3;
        c = n/3;
    }else if(n%3==1){
        a = n/3;
        b = n/3;
        c = n/3 +1;
    }else if(n%3==2){
        a = n/3;
        b = n/3 + 1;
        c = n/3 + 1;
    }
    printf("suma celor 3 numere este: %d+%d+%d=%d\n",a,b,c, a + b + c);
    printf("produsul maxim este: %d * %d * %d = %d\n",a,b,c,a*b*c);
    return 0;
}
