#include <stdio.h>
#include <math.h>

double radical(double x)
{
	return (double)sqrt(x);
}
double invers(double x)
{
	if (x==0) return 0;
	return (double)((1.0)/x);
}
double sinus(double x)
{
	return (double)sin(x);
}
int main()
{
	double (*functii[3])(double);
	functii[0] = radical;
	functii[1] = invers;
	functii[2] = sinus;

	double x;
	printf("Citim numarul x =");
	scanf("%lf", &x);

	for (int i=0;i<3;i++)
	{
		printf("Aplicam functia %d => %lf\n",i, (*functii[i])(x));
	}
	return 0;
}
