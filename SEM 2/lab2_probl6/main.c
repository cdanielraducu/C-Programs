#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("fisier.txt","r");
    int a,nr=0,s=0;
    while( fscanf(f,"%d",&a)!=-1){
    nr++;
    s = s +a;
    printf("%d\n",s);
    }

    nr++;
    int S= (nr*(nr+1))/2;
    int x;
    printf("%d",x=S-s);
    return 0;
}
