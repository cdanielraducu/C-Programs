#include <stdio.h>
#include <stdlib.h>

int numarPerechi(int n, int* v) {
    int i, p[101]={0},c=0;
   scanf("%d", &n);;
   for(i=0;i<n;i++)
   {
       p[v[i]]++;
       if(p[v[i]]==2) {c++;
       p[v[i]]=0;}
   }
   return c;
}

int main()
{
    int n, *v, i;
    scanf("%d", &n);
    v = (int*)malloc(sizeof(int)*n);
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    printf("%d", numarPerechi(n, v));
    return 0;
}
