#include <stdio.h>
#include <stdlib.h>

union uniune{
char c[2];
int x;
};

int main()
{ union uniune a;
    scanf("%d",&a.x);
    char aux;
    aux=a.c[0];
    a.c[0]=a.c[1];
    a.c[1]=aux;
    printf("%d",a.x);

    return 0;
}
