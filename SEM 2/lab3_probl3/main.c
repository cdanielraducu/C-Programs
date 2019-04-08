#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void majoritar(int n,...){
    va_list lp;
    va_start(lp,n);
    int aux=0,c=1,x;
    int i;
    x = va_arg(lp,int);
    printf("%d\n\n",x);
    for(i=0;i<n-1;i++){
        aux = va_arg(lp,int);
        printf("\t%d\n",aux);
        if(aux!=x){
            c--;
        }else  c++;
        if(c<0){
            x = aux;
            c=1;
            printf("%d\n",x);
        }
    }
    va_end(lp);
    va_start(lp,n);
    int contor=0;
    for(i=0;i<n;i++){
        aux = va_arg(lp,int);
        if(x==aux) contor ++;
    }
    printf("%d\n\n",x);
    if(contor==n/2+1) printf("elementul majoritar este %d\n",x);
    else printf("nu avem elm, majoritar");
    va_end(lp);
}

int main()
{
    majoritar(8,7,8,7,7,7,2,2,2);
    return 0;
}
