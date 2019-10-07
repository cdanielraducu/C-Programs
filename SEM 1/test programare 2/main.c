#include <stdio.h>
#include <stdlib.h>

struct produs{
char nume[30];
float pret;
struct magazin* m;
struct produs *next;
int nr_mag;
};

struct magazin{
char nume[30];
int gps_x,gps_y;
};

void inserare(struct produs **head)
{   struct produs *p;
    int nr_mag;
    struct produs *aux = (struct produs*)malloc(sizeof(struct produs));
    citire(&p,nr_mag);
    strcpy(aux->nume,p->nume);
    aux->pret=p->pret;
    aux->nr_mag=p->nr_mag;
    if(*head==0){
        *head=aux;
        aux->next=0;}
    else{

    aux->next=*head;
    *head=aux;
    }
}

void citire(struct produs **p){
    *p=(struct produs*)malloc(sizeof(struct produs));
        scanf("%s",(*p)->nume);
        scanf("%f",&(*p)->pret);
        scanf("%d",&(*p)->nr_mag);
        (*p)->m=(struct magazin*)malloc((*p)->nr_mag*sizeof(struct magazin));

}

void afisare(struct produs **head){
    struct produs *aux;
    aux=*head;
    while(aux!=NULL){
        printf("%s %.2f %d\n",aux->nume,aux->pret,aux->nr_mag);
        aux=aux->next;
           }
}
//afisare pentru citire
/*
void afisare(struct produs **p,int nr_prod,int *nr_mag){
    int i;
    for(i=0;i<nr_prod;i++){
        printf("[#%d] %s, %.2f, este in %d magazine\n",i+1,(*p)[i].nume,(*p)[i].pret,
               nr_mag[i]);
    }
}
*/

int main()
{   struct produs *head;
    head=NULL;
    inserare(&head);
//    afisare(&p,nr_prod,&nr_mag);
    afisare(&head);
    return 0;
}
