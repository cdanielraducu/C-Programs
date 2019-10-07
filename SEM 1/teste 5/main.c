#include <stdio.h>
#include <stdlib.h>

 int* citire(int *v,int n)
    {
        int i;

        v=(int*)malloc(n*sizeof(int));
        for(i=0;i<n;i++)
            scanf("%d",&v[i]);
        return v;
    }
//variabilele locale din main se pot transmite la functie ca parametrii
// variabilele locale se folosesc de functie prin parametrii
//v = &v[0];
int main()
{
   int i,n;
   int *p=NULL;
   printf("n=");scanf("%d",&n);
   p=citire(&p,n);
    for(i=0;i<n;i++)
        printf("p[%d]=%d \t",i,p[i]);
    return 0;
}
