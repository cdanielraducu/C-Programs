#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=8,i=0,j=n-1,sum=20;
    int a[8]= {2,5,7,12,15,18,25,40};
    while(i<j){
        printf("%d\n",a[i]+a[j]);
        if(a[i]+a[j]==sum){
                printf("%d si %d \n",a[i],a[j]);
                break;
        }
        if(j==i+1) {
                i++;
                j=n;
        }
        j--;
    }

    return 0;
}
