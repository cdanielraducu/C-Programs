#include <stdio.h>
#include <stdlib.h>

double f(double t)
{
    return t-1.5;

}
float g(int);
int main()
{
   float a= 11.5;
   printf("%f\n",f(a));
   printf("%f\n",g(a));

}
    float g(int z)
    {
    return z+2.0;
}
