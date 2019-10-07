#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h,m,s,a;
    scanf("%d:%d:%d %cM",&h,&m,&s,&a);
    if((a=='P')&& (h<12)) h=h+12;
    printf("%02d:%02d:%02d",h,m,s);
    if(a=='A') printf("%02d:%02d:%02d",h,m,s);

    return 0;
}
