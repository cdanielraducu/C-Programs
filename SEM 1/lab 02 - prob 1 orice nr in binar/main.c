#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,l=0,v[100];
    scanf(" %d",&n);
    while(n)
    {
        if(n%2==0)
           { v[l] = 0;
         l++;}
        else
            {v[l] = 1;
        l++;}
        n=n/2;
    }
    for(i=l-1; i>=0; i--)
    {
        printf(" %d", v[i]);
    }
    return 0;
}
//25|1
//12|0
//6|0
//3|1
//1|1
