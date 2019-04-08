#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f = fopen("fisier.txt","r");
    int n,i;
    fscanf(f,"%d", &n);
    printf("%d\n",n);
    int *v = (int*)malloc(sizeof(int)*n);
    for(i=0;i<2*n;i++){
        fscanf(f,"%d",&v[i]);
    }
    for(i=0;i<2*n;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
    int max1p=0,max1i=0,ok=0;
    for(i=0;i<n;i++){
        if(v[i]%2==0){
            if(v[i]>=max1p){
                max1p=v[i];
            }
        } else if(v[i]>=max1i){
                max1i = v[i];
        }
    }
    for(i=n;i<2*n;i++){
        if(v[i]%2==0){
            if(max1i>v[i]){
                ok = 1;
            }
        }else if(max1p>v[i]){
                ok = 1;
        }
    }
    if(ok == 0){
        printf("DA");
    }else printf("NU");

    return 0;
}
