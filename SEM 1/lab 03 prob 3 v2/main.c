#include <stdio.h>
#include <stdlib.h>
int x[20],y[20],s,i,n;
void citire(int *x, int *y)
{
    printf("n= ");
    scanf("%d", &n);
    printf("\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &x[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &y[i]);
    }
    for(i=0; i<n; i++)
    {
        printf("%d", x[i]);
    }
    printf("\n");
    for(i=0; i<n; i++)
    {
        printf("%d",y[i]);
    }
    printf("\n");
}
int main()
{
    citire(x,y);
    int s=0,l=1,S=0,ci=0;
    for(i=n-1; i>=0; i--)
    {
        s= x[i] + y[i];
        printf("%d\t",s);

        if(s>9)
        {
            x[i-1]+=1;
            s=s-10;
        }
        else
        S=S*10+s;
        ci++;
        s=0;


    }
    int aux=0;
    printf("\nci= %d",ci);
    printf("S=%d \n" , S);
    for(i=0; i<ci; i++)
    {

        aux=aux*10+S%10;
        S/=10;

    }
    S=aux;

    printf("\n %d",S);
    return 0;
}
