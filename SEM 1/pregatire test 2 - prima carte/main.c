#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

int power(int m, int n);

int main()
{  /* int c, n1, nw, nc, state;
state = OUT;
n1=nw =nc =0;
while((c=getchar()) !=EOF)
    ++nc;
if(c=='\n') n1++;
if(c== ' ' || c== '\n' || c == '\t')
    state = OUT;
else if(state == OUT)
{
    state = IN;
    ++nw;
}
    printf("%d %d %d\n",n1,nw,nc);
    */
    /*
    int c;
    while((c=getchar()) != EOF)
    {
        if(c==' ') printf("\n");
        else printf("%c",c);
    }
  */
/*
int c, i, nwhite, nother;
int ndigit[10];

nwhite = nother = 0;
for(i=0; i < 10; i++)
    ndigit[i] = 0;
while((c=getchar()) != EOF)
    if(c>= '0' && c <='9')
    ++ndigit[c-'0'];
else if(c== ' ' || c == '\n' || c == '\t')
    ++nwhite;
else ++nother;
printf("digits = ");
for(i=0;i<10; ++i)
 {
    printf(" %d", ndigit[i]);
printf(", white space = %d, other = %d\n", nwhite, nother);
}
*/
/*
int i;
for(i=0;i<10;i++)
    printf("%d %d %d\n", i, power(2,i), power(-3,i));
    return 0;
}int power(int base, int n)
{
    int i,p;
    p=1;
    for(i=0;i<=n;i++)
        p = p *base;
        return p;
}
