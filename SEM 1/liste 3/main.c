#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    int x; char nume[30];
struct    produs *next;
}produs;

void inserare(produs **start, produs **end,int x,char *n){
    produs *aux=(produs*)malloc(sizeof(produs));
    aux->x=x;
    strcpy(aux->nume,n);
    aux->next=0;
    if(*start==0){
        *start=aux;
        *end=aux;
        return;
    }
    (*end)->next=aux;
    *end=aux;
    return;
}

void afisare(produs *start){
    produs *aux;
    aux=start;
    while(aux!=NULL){
        printf("%d",aux->x);
        aux=aux->next;

    }
}
/*
void grupa(elev *start, int grupa)
{
    elev *aux = root;
    while (aux != NULL)
    {
        if (aux->grupa == grupa)
            printf("%s %s %d %.2f\n", aux->nume, aux->prenume, aux->grupa, aux->medie);
        aux = aux->next;
    }
    return;
}
*/

void interschimba(produs *a,produs *b){
    produs aux;
    produs *aNext=a->next;
    produs *bNext=b->next;
    memcpy(&aux,a,sizeof(produs));
    memcpy(a,b,sizeof(produs));
    memcpy(b,&aux,sizeof(produs));
    a->next=aNext;
    b->next=bNext;
    return;
}

void sortare(produs *start){

    int ok=0;
    while(ok==0){
            ok=1;
        produs *aux=start;
        while(aux!=NULL){
            if(strcmp(aux->nume,aux->next->nume)>0)
                {
                    ok=0;
                    interschimba(aux,aux->next);}
          /*
          else if(strcmp(aux->nume,aux->next->nume)==0){

            if(aux->medie , aux->next->medie){

                ok=0;
                interschimba(aux,aux->next);

            }*/
            if(aux->next->next==0)
                break;
                aux=aux->next;

          }

        }

    }


int main()
{
        produs *start,*end;
        start = end =0;
        insert(&start, &end, 1,"Alex");
    insert(&start, &end, 2,"Dani");
    insert(&start, &end, 4,"Bogdan");
    insert(&start, &end, 0,"Octa");
    printf("\n\n##Inainte de sortare \n");
    afisare(start);

    printf("\n\n##Dupa sortare \n");
    sortare(start);
    afisare(start);
    return 0;
}
