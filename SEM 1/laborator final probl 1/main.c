#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int x,y,p,n;
    printf("y,p,n\n");
    scanf("%d %d %d",&y,&p,&n);
    int aux=0;
    aux=((1<<n)-1)<<(p-n+1);
    printf("Aux=%d\n",aux);
    int aux2=y&aux;
    x=aux2>>(p-n+1);
    printf("%d",x);
/*
int x,y;
    x=36;
    y=12;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("%d %d",x,y);
*/
    return 0;
}
