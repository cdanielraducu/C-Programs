#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int n,i;
   scanf("%d", &n);
   int v[1000];
   for(i=0;i<n;i++)
    scanf("%d", &v[i]);
   for(i=0;i<n;i++)
   {
       if(v[i]%2==0)
        printf("%.2f", sqrt(v[i]));
      printf("\n");
   }

    return 0;
}
