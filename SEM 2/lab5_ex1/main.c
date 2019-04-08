#include <stdio.h>
#include <stdlib.h>

int main()
{   //complexitate O(n)
    FILE *f = fopen("fisier.txt","r");
    int n,i=0;
    fscanf(f,"%d",&n);
    printf("%d\n",n);
    int *v = (int*)malloc(sizeof(int)*n*2);
    while( fscanf(f,"%d",&v[i++])!=EOF);
    for(i=0;i<n*2;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    int sxp=0,syp=0;
    int sxi=0,syi=0;
    for(i=0;i<n*2;i++){
        if(i<=n-1){
            if(v[i]%2==0) sxp += v[i];
            else sxi += v[i];
        }else if(v[i]%2==0) syp += v[i];
            else syi += v[i];
    }
    printf("sxp =%d \nsxi=%d \nsyp=%d \nsyi =%d \n",sxp,sxi,syp,syi);
    int val = 0;
    val = sxp * syi + sxi * syp;
    printf("%d",val);
    return 0;
}
