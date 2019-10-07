#include <stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	for (unsigned char* p=(unsigned char*)&x, i=0;i<4;++p,++i)
	{
		printf("Byte-ul %d are valoarea %d\n", i, *p);
	}
	return 0;
}
