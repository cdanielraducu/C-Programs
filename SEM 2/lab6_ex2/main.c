#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE *f = fopen("fisier.txt","r");
    int i=0,n=1;
    int *v = (int*)malloc(sizeof(int));
    while(fscanf(f,"%d",&v[i++]) != EOF){
        v = (int*)realloc(v,sizeof(int)*(n+1));
        n++;
    }
    n--;
    for(i=0;i<n;i++){
        printf("%d ",v[i]);
    }
    int a,k=0,p=1;
    scanf("%d",&a);
    for(i=0;i<n;i++){
        while(v[i]>p){
            p = p * a;
        }
        if(v[i]==p){
            printf("%d ",v[i]);
            p = p *a;
        }
    }
    return 0;
}
