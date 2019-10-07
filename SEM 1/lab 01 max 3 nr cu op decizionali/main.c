#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max=0;
    printf("dati valori pentru a, b, c: \n");
    scanf("%d %d %d", &a, &b, &c);
    max = (a>b) ? ((a>c) ? a : c) : ((b>c) ? b : c);
    printf("maximul dintre cele 3 numere este: %d", max);
    return 0;
}
