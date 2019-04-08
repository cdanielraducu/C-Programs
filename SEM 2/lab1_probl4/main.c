#include <stdio.h>
#include <stdlib.h>

void swap(int a,int b){
    int aux;
    aux=a;
    a=b;
    b=aux;
}

void sortare(int *v){
    int i;
    for(i=1;i<strlen(v);i++){
        for(i=0;i<strlen(v);i++){
          if(v[i]>v[i+1]) swap(v[i],v[i+1]);
        }
    }
}

int main()
{
    int n,i,v[100];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    sortare(v);
    for(i=0;i<n;i++){
        printf("%d",v[i]);
    }
    return 0;
}
