#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,n1=0,n2=0,n3=0;
   printf("dati o valoare\n");
   scanf(" %d",&n);
   n1=n<<3;
   n2=n>>2;
   n3=(n<<3) + (n<<1);
   printf("n1 = %d, n2 = %d, n3 = %d", n1, n2, n3);
    return 0;
}
