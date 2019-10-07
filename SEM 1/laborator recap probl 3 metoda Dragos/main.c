#include <stdio.h>

union uniune
{
	short int i;
	unsigned char bytes[2];
}un;

void swap_char(char *a, char *b)
{
	char tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	printf("Introduceti numarul=");
	scanf("%d", &un.i);
	printf("Numarul original = %d\n", un.i);
	swap_char(&un.bytes[0],&un.bytes[1]);
	printf("Numarul modificat = %d\n", un.i);
	return 0;
}
