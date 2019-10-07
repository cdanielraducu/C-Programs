#include <stdio.h>


int main()
{
	int a,b;
	char operator;
	scanf("%d %c %d", &a, &operator, &b);
	int rezultat = 0;

	switch(operator)
	{
		case '+':
			rezultat = a+b;
			break;
		case '-':
			rezultat = a-b;
			break;
		case '*':
			rezultat = a*b;
			break;
		case '/':
			if (b!=0)
			{
				rezultat = a/b;
			}
			else
			{
				printf("Operatie imposibila\n");
				return -1;
			}
			break;
		case '%':
			if (b!=0)
			{
				rezultat = a%b;
			}
			else
			{
				printf("Operatie imposibila\n");
				return -1;

			}
			break;
		default:
			break;
	}
	printf("Rezultat = %d", rezultat);
	return 0;
}
