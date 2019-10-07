#include <stdio.h>
#include <limits.h>
int main()
 {
 int n,i=0;
 scanf("%d",&n);
 for(i=15;i>=0;--i)
 {
 int bit=n&(1<<i);
 int x=bit>>i;
 printf("%d",x);
 }

 return 0;
 }
