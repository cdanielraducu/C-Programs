#include <stdio.h>
#include <stdlib.h>


void functie(int **x)
{
    int l,k,y;
    printf("linia,coloana,numar: \n");
    scanf("%d %d %d",&l,&k,&y);
    printf("%d %d %d\n",l,k,y);
    l--;k--;
    x[l][k]=y;
}

int inmultire(int **p,int **x,int **z,int n,int m){
    int i,j,a=0,b=0,k=0;

    for(j=0;j<n;j++){
        for(i=0;i<m;i++){
    for(k=0;k<n;k++){
            p[j][i]+=x[j][k]*z[k][j];
            }
        }
    }
    return p;
}
//problema nu face introducerea bine si la a doua;
int main()
{
    int i,j,n,m; int a,b;
    int h;
    printf("n si m?\n");
    scanf("%d %d",&n,&m);
    //citire
    int **x=(int**)calloc(sizeof(int*),n);
    for(i=0; i<n; i++){
        x[i]=(int*)calloc(sizeof(int),m);
    }
    int **z=(int**)calloc(sizeof(int*),n);
    for(b=0; b<n; b++){
        z[b]=(int*)calloc(sizeof(int),m);
    }
    //introducere date
    printf("cate schimbari?\n");  scanf("%d",&h);
    for(i=0; i<h; i++){
        functie(x);
    }
    printf("cate schimbari? pentru a doua\n");  scanf("%d",&h);
    for(a=0; a<h; a++){
        functie(z);
    }
    //afisare
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            printf("%d ",x[j][i]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(b=0; b<m; b++){
        for(a=0; a<n; a++){
            printf("%d ",z[b][a]);
        }
        printf("\n");
    }
    int **p=(int**)calloc(sizeof(int*),n);
    for(i=0; i<n; i++){
        p[i]=(int*)calloc(sizeof(int),m);
    }
    //p=inmultire(p,x,z,n,m);
     int k=0;
     for(j=0;j<n;j++){
        for(i=0;i<m;i++){
    for(k=0;k<n;k++){
            p[j][i]+=x[j][k]*z[k][j];
            printf("%d\n",p[j][i]);
            }
        }
     }
    printf("\n\n");
    for(j=0; j<m; j++){
        for(i=0; i<n; i++){
            printf("%d ",p[j][i]);
        }
        printf("\n");
    }
    return 0;
}
