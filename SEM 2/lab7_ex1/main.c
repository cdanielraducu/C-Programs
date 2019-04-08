#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y;
}intervale;

int cmp(void *arg1, void *arg2){
    intervale *a = (intervale*)arg1;
    intervale *b = (intervale*)arg2;
    return a->y-b->y;
}

int main()
{
    FILE *f = fopen("fisier.txt","r");
    int n,i;
    fscanf(f,"%d",&n);
    intervale in[n];
    for(i = 0;i<n;i++){
        fscanf(f,"%d %d",&in[i].x,&in[i].y);
    }
    for(i=0;i<n;i++){
        printf("[%d,%d]\n",in[i].x,in[i].y);
    }
    qsort(&in,n,sizeof(intervale),cmp);
    printf("\n");
    for(i=0;i<n;i++){
        printf("[%d,%d]\n",in[i].x,in[i].y);
    }
    intervale aux[n];
    int k =0;
    i =0;
    aux[k].x = in[i].x;
    aux[k].y = in[i].y;
    k++;
    for(i=0;i<n;i++){
        if(aux[k-1].y<in[i].x){
            aux[k].x = in[i].x;
            aux[k].y = in[i].y;
            k++;
            }
    }
    n = k;
    for(k=0;k<n;k++){
        printf("\n[%d,%d]\n",aux[k].x,aux[k].y);
    }
    return 0;
}
