#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nume[30];
float pret;
struct produs *next;
}produs;
void inserare(char *nume,float pret, produs **head){
    produs *aux=(produs*)malloc(sizeof(produs));
    strcpy(aux->nume,nume);
    aux->pret=pret;
    aux->next=*head;
    *head=aux;
}
void inserare_sf(char *nume,float pret, produs **head){
    produs *aux=(produs*)malloc(sizeof(produs));
    strcpy(aux->nume,nume);
    produs *sf;

    sf=*head;
    while(sf->next != NULL)
        sf=sf->next;
    //trb sa aflu sfarsitul, si pornesc de la head si  cand urmatorul ajunge la NULL stiu ca ala e sfarsitul
    aux->pret=pret;
    aux->next=NULL;
    sf->next=aux;
//sf->next!!!!
}
void inserare_random(char *nume,float pret, produs **head,int poz)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    strcpy(aux->nume,nume);
    aux->pret=pret;
    produs *sf,*temp;
    sf=*head;
    if(poz==0){
        aux->next=*head;
        *head=aux;
        return;
    }
    int i;
    for(i=0;i<poz-1;i++){
        sf=sf->next;
        if(sf==NULL)
            return;
    }
    temp=sf->next;
    aux->next=temp;
    sf->next=aux;
}

void stergere(produs **head,int poz1,int poz2){
    produs *aux=(produs*)malloc(sizeof(produs));
    produs *sf,*inc;
    sf = *head;
    inc = *head;
    int i,n=0,k;
    aux=*head;
    while(aux != NULL){
        n++;
        aux=aux->next;
    }
    k=poz2-poz1-1;



    for(i=0;i<poz1-1;i++){
        inc=inc->next;
    }
    for(i=0;i<poz2-2;i++){
        sf=sf->next;
    }
    if(n-k<3)
        inc->next=sf;
    else inc->next=sf->next;

    //pot sa mai ramana minim 2 produse, deci am facut doar cazul pentru care mai sunt 2;
}

void afisare(produs **head){
produs *aux;
aux=*head;
while(aux != NULL){
    printf("%s %.2f\n",aux->nume,aux->pret);
    aux=aux->next;
}
}

int main()
{
    produs *head=NULL;
    inserare_sf("aaaaaaaaaaaaaaaaaaaaaa",1,&head);
    printf("\n\n\n");
    afisare(&head);
    printf("\n\n");
    inserare_random("bbbbbbbbbbbbbbbbb",22222,&head,2);
    afisare(&head);
    stergere(&head,1,6);
    printf("\n\n");
    afisare(&head);

    return 0;
}
