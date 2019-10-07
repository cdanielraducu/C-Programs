#include <stdio.h>
#include <stdlib.h>

int codificare(int n)
{
union
{
    char ch[2];
    int i;
} uniune;
uniune.i = n;

uniune.ch[0] = uniune.ch[0]^uniune.ch[1];
uniune.ch[1] = uniune.ch[0]^uniune.ch[1];
uniune.ch[0] = uniune.ch[0]^uniune.ch[1];

return uniune.i;
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", codificare(n));
    return 0;
}
