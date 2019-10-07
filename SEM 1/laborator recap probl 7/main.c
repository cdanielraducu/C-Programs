#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sinus(double *x){
   *x= sin(*(x));
}
void radical(double*x){
   *x=sqrt(*(x));
}
void invers(double*x){
    *x=1/(*x);
}
void functie(double *x,void(*f)(double*)){
f(x);
}

int main()
{   double x=1;
    functie(&x,sinus);
    printf("%.2f\n",x);
    functie(&x,radical);
    printf("%.2f\n",x);
    functie(&x,invers);
    printf("%.2f\n",x);
    return 0;
}
