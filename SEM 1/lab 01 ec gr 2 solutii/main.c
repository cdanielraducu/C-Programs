#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,b,c;
    float d=0,r1=0,r2=0,i1=0,i2=0,x1=0,x2=0;
    printf("ecuatia de gradul 2 este de forma: ax^2 + bx + c = 0\n");
    printf("dati valori pentru a,b,c: \n");
    scanf("%d %d %d", &a, &b, &c);
    d = (b)*(b) -((4*a)*(c));
    printf("d = %d\n", d);
    if(d>0)
    {
        x1= ((-b)+sqrt(d))/2*a;
        x2 = ((-b)-sqrt(d))/2*a;
        printf("solutiile sunt %d si %d",x1,x2);
    }
    else if(d==0)
    {
        x1 = (-b)/2*a;
        printf("x1 = ", x1);
    }
    else if(d<0)
    {   r1 = (-b)/2*a;
        i1 = (sqrt((-d)))/2*a;
        r2 = (-b)/2*a;
        i2 = (sqrt((-d)))/2*a;
        printf("solutiile sunt: x1 =%.2f + i*%.2f si x2= %.2f -i*%.2f",r1,i1,r2,i2);
    }

    return 0;
}
