#include <stdio.h>
#include <stdarg.h>

void citire_ints(int nr, ...)
{
	printf("Citim %d valori int\n", nr);
	va_list lista_pointeri;
	va_start(lista_pointeri, nr);

	for (int i=0;i<nr;i++)
	{
		int *p = va_arg(lista_pointeri, int*);
		printf("Valoare int %i=", i);
		scanf("%d", p);
	}
}
void afisare_ints(int nr, ...)
{
	va_list lista_ints;
	va_start(lista_ints, nr);
	printf("\nAfisam %d valori int\n", nr);
	for (int i=0;i<nr;i++)
	{
		printf("%d ", (int)va_arg(lista_ints,int));
	}
	printf("\n");
}
void prelucrare_biti(int *x, int p, int y, int n)
{
	*x = (*x>>(p+1))<<(p+1) | ((y % (1<<n))&((1<<p)-1));
}
void afisare_biti(int x, int nr_biti)
{
	for (int i=nr_biti-1;i>=0;i--)
	{
		printf("%d", (x>>i)&1);
	}
	puts("");
}

int main()
{
	int x,y,n,p;
	citire_ints(4,&x,&y,&n,&p);
	afisare_ints(4,x,y,n,p);

	afisare_biti(x, sizeof(int)*8);
	prelucrare_biti(&x, p, y, n);
	afisare_ints(1, x);
	afisare_biti(x, sizeof(int)*8);
	afisare_biti(y, sizeof(int)*8);

	return 0;
}
