#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
struct elev{
char nume[30];
float nota;
};

//functie care primeste un nr variabil de paramterii
//
float suma(int nr,...){
    va_list valist; // structura/poti sa o num cum vrei tu
    va_start(valist,nr); // incarc in valist un nr de argumente
    struct elev *sum;
    int i; float S=0;
    for(i=0;i<nr;i++){
        sum=va_arg(valist,struct elev*);//va_arg ia din lista urm struct elev
        S += sum->nota;
    }
    va_end(valist);
    return S;
}
int main()
{
    int nr; float S=0;
    struct elev e1;
    struct elev e2;
    printf("cati arg? \n");
    scanf("%d",&nr);

        printf("dati datele:\n");
        scanf("%s %f",e1.nume,&e1.nota);

        printf("dati datele:\n");
        scanf("%s %f",e2.nume,&e2.nota);

    S = suma(nr,&e1,&e2);
    printf("%.2f",S);
    return 0;
}
