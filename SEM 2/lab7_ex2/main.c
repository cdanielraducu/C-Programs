#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x,y;
}intervale;

int cmp(void *arg1, void *arg2){
    intervale *a = (intervale*)arg1;
    intervale *b = (intervale*)arg2;
    return a->x-b->x;
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
    int x = in[0].x;
    int y = in[0].y;
    int aux[n];
    aux[0]= y;
    for(i=0;i<n;i++){

        if(aux[0]<in[i].x){
            printf(" %d", aux[0]);
            aux[0] = in[i].y;
        }else if(aux[0]>in[i].y){
        aux[0] = in[i].y;
        }
    }
    printf(" %d",aux[0]);

    return 0;
}
