#include <stdio.h>
#include <stdlib.h>

float divide(int a, int b)
{
    return (float)a/b;
}
float medie(int a,int b)
{
    return (float)(a+b)/2;
}
void calcul(int a,int b,float(*pf)(int,int))
{
  printf("%f",(*pf)(a,b));
}

int main()
{
    calcul(3,2,divide);
    printf("\n");
    calcul(5,10,medie);
    return 0;
}
