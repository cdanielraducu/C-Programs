#include <stdio.h>
#include <stdlib.h>

int f(int a,int b){
    int c;
    c = a%b;
    if(c==0) return b;
    else{
        a=b;
        b=c;
       // c=a%b;
        return f(a,b);
    }
}
void f2(int n,int *v,int c){
    int i,ok=0,j;
        for(i=0;i<n;i++)
        {
                c = f(v[i],v[n-1]);
                printf("%d\n",c);
    for(j=0;j<n;j++){
        if(v[j]%c==0) ok++;
        }
    if(ok==n-1) return;
        else{
            f2(n-1,v,c);
            }
        }
}
void f3(int n, int *v,int *c){
    if(n==1) *c=v[0];
    else if(n>1){
        f3(n-1,v,c);
        *c=f(*c,v[n-1]);
    }
}
void f4(int n,int *v,int *c,int i){
    if(i==0) *c=v[0];
    else if(i<n){
        *c=f(*c,v[i]);
        f4(n,v,c,i+1);
    }
}

int main()
{   int i,n,c=0;
    scanf("%d",&n);
    int *v=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    f3(n,v,&c);
    printf("%d",c);

        return 0;
}
