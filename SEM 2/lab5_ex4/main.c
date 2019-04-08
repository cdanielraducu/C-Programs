#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("fisier.txt","r");
    int n,k,i=0,smax=0,S=0;
    scanf("%d",&k); int x[k];
    fscanf(f,"%d",&n);
    int *v = (int*)malloc(sizeof(int)*n);
    while(fscanf(f,"%d",&v[i++]) != EOF);
    for(i=0;i<k;i++){
            x[i]=v[i];
            S = S + v[i];
          smax =S;
    }
    for(i=k;i<n;i++){
        S = S + v[i] - x[i%4];
        if(S>smax) smax = S;
        x[i%k] = v[i];
    }
    printf("%d",smax);
    return 0;
}
