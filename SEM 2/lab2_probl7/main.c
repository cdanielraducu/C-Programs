#include <stdio.h>
#include <stdlib.h>

int main()
{
     FILE *f = fopen("fisier.txt","r");
    int a,nr=0,s1=0,s2=0,x,S1,S2;
    while( fscanf(f,"%d",&a)!=-1){
    nr++;
    s1 = s1 +a;
    s2= s2 + a*a;
    }
    printf("%d \n",nr);
    S1= (nr*(nr+1))/2;
    S2= (nr*(2*nr+1)*(nr+1))/6;
    int aux1=0,aux2=0,y=0;
    aux1=S1-s1;
    aux2=S2-s2;
    printf("%d \n%d\n",aux1,aux2);
    aux2=aux2/aux1;
    printf("x=%d\n",(aux2+aux1)/2);
    y=aux2 - (aux2+aux1)/2;
    printf("y=%d",y);
    return 0;
}
