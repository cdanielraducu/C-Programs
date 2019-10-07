#include <stdio.h>
#include <stdlib.h>
int cmp(void *arg1,void *arg2)

{
    int *a=(int*)arg1;
    int *b=(int*)arg2;
    return(*a)-(*b);
}
int main()
{
    int v[4]={4,2,1,3};
    qsort(v,4,sizeof(int), cmp);
    printf("%d",v[0]);
    return 0;
}
