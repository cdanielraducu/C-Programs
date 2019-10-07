#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nume[30],eticheta[30];
float pret;
struct produs *next;
}produs;

void scumpire(produs *p){

    p->pret = p->pret*1.1;
}
void ieftinire(produs *p){
    p->pret = p->pret*0.9;
}
void schimbare_eticheta(produs *p){
    char e[30];
    printf("Ce eticheta vreti sa puneti?\n");
    scanf("%s",&e);
    strcpy(p->eticheta,e);
}
void operatie(produs *p,void(*f)(produs*)){
    f(p);
}

int main()
{   int i,k,n,corectie;
    char c=0;
    scanf("%d",&n);
    produs *p=(produs*)malloc(sizeof(n));
    for(i=0;i<n;i++){
    printf("dati datele pentru produs: nume, eticheta, pret\n");
    scanf("%s %s %f",p[i].nume,p[i].eticheta,&p[i].pret);
    }fflush(stdin); fflush(stdout);
    printf("\nProdusele adaugate sunt:\n\n");
    for(i=0;i<n;i++){
        printf("[%d] %s %s %.2f\n",i+1,p[i].nume,p[i].eticheta,p[i].pret);
    }

    i=0;
    while(c != EOF){
        printf("ce corectie vreti sa faceti? (1.Scumpire; 2.Ieftinire; 3.Schimbare de eticheta)\n");
        scanf("%d",&corectie);
        printf("si ce produs?");
        scanf("%d",&k);
        k--;
        switch(corectie){
        case(1) : operatie(&p[k],scumpire); break;
        case(2) : operatie(&p[k],ieftinire); break;
        case(3) : operatie(&p[k],schimbare_eticheta); break;
        default : printf("nu ati introdus nici una din operatiile posibile!\n");
        }
        for(i=0;i<n;i++){
                printf("Produsul [%d] %s %s %.2f\n",i+1,p[i].nume,p[i].eticheta,p[i].pret);
        }
        printf("vreti sa mai faceti vreo corectie? Daca da apasati <<enter>>.Daca nu apasati <<ctrl+z>> ");
        c=getchar();
    }
    return 0;
}
/*
Samsung Telefon 1000
Iphone ITelefon 2000
LG Televizor 5000
*/
