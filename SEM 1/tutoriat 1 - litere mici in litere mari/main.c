#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, i;
    scanf("%d", &n);
    char v[100];
    getchar();
    for (i=0; i<n; i++)
    {
        v[i] = getchar();
    }

    for (i=0; i<n; i++)
    {
        if (v[i]>96)
            v[i] = v[i]-32;
        printf("%c", v[i]);
    }

    return 0;
}
