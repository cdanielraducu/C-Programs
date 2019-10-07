#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cod2.h"
int main()
{
    int a,b;
    char op;
    scanf("%d %s %d", &a, &op, &b);
    operator(op);
    printf("%d %c %d", a,op,b);
    return 0;
}
