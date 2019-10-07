#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10],i,n,k,max=0,sum=0;
    printf("n=?");
    scanf("%d",&n);
    printf("\n");
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    printf("\n");
    for(i=0;i<n;i++){
       if(v[i]>=0)  sum+=v[i];
       else if(sum>max){
        max=sum;
        sum=0;
       }
    }
    printf("%d",max);
    return 0;
}
