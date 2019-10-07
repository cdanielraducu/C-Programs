#include<stdio.h>
#include<math.h>
int main()
{
int x,y,n,p;
scanf("%d %d %d %d", &x,&y,&n,&p);
x=x%(int)pow(2,p);
y=y%(int)pow(2,n);
y=y<<p;
x=x|y;
printf("\n%d\n\n",y);
return 0;
}
