#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int max(int n,...){
    va_list lp;
    va_start(lp,n);
    int max=0,aux=0,i;
    for(i=0;i<n;i++){
        aux= va_arg(lp,int);
        if(aux>max) max = aux;
    }
    va_end(lp);
    return max;
}
/*
void ordine(int a, int b, int c, int d){
        if(a<=b){
                printf("a<=b");
            if(b<=c){
                printf("<=c");
                if(c<=d){
                    printf("<=d");
                }else printf("\n c>=d");
            }else printf("\n b>=c");
        }else printf("\n a>=b");
    int x = max(4,a,b,c,d);
    if(x == a) printf("a este maxim");
}
*/
void ordine2(int a,int b, int c, int d){
    if(max(2,a,b)==b){ printf("%d<=%d",a,b);
        if(max(2,b,c)==c){ printf("<=%d",c);
            if(max(2,c,d)==d){ printf("<=%d",d);
            }else printf("\n %d>=%d \n",c,d);
        }else printf("\n %d>=%d \n",b,c);
    }else printf("\n %d>=%d \n",a,b);
}


int main()
{   int x=0;
    x =max(5,2,4,3,6,1);
    ordine2(8,10,25,24);
    return 0;
}
