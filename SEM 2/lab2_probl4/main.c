#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int f1(int x){
    return x-1;
}
int f2(int x){
    return 2 * x*x + 10;
}
int functie(int x,int y,int(*pf)(int)){
    return pf(x)+pf(y);
}

int main()
{
    printf("%d",functie(3,2,f1));
    return 0;
}
