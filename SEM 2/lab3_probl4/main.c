#include <stdio.h>
#include <stdlib.h>

int max(int a,int b){
    if(a>b) return a;
    else return b;
}

/*
while(i<m && j<n)
    iif(a[i
<b{j
c[k++] = a[i++
else  = b
    if egal avansam la amandoua
    plus while daca unu nu s-a terminat
*/
int main()
{   int n,m;
    scanf("%d %d",&n,&m);
    int *v1 = (int*)malloc(sizeof(int)*n);
    int *v2 = (int*)malloc(sizeof(int)*m);
    int *V = (int*)malloc(sizeof(int)*(n+m));

    int i,j,k=0;
    for(i=0;i<n;i++){
        scanf("%d",&v1[i]);
    }
    for(j=0;j<n;j++){
        scanf("%d",&v2[j]);
    }
    for(i=0;i<n;i++)
        V[k++]=v1[i];
    for(j=0;j<m;j++)
        V[k++]=v2[j];
    int aux=0;
    for(k=0;k<n+m;k++){
        for(k=0;k<n+m-1;k++){
            if(V[k]>V[k+1]){
                aux=V[k];
                V[k]=V[k+1];
                V[k+1]=aux;
            }
        }
    }
    for(k=0;k<n+m;k++){
        printf("%d\n",V[k]);
    }
    return 0;
}
