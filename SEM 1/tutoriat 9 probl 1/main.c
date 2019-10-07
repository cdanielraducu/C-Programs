#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nume[30];
    int grupa,an;
    float medie;
    struct student *next;
} student;

void inserare(student **head,char *nume,int grupa,int an,float medie)
{
    student *aux=(student*)malloc(sizeof(student));
    student *sf=*head;
    strcpy(aux->nume,nume);
    aux->grupa=grupa;
    aux->an=an;
    aux->medie=medie;
    aux->next = 0;
    if(*head==NULL)
    {
        *head=aux;
        return;
    }
    while(sf->next!=NULL)
    {
        sf=sf->next;
    }
    sf->next=aux;

}
void afisare(student **head)
{
    student *aux;
    aux=*head;
    printf("afisare:\n");
    while(aux!=NULL)
    {
        printf("%s %d %d %.2f\n",aux->nume,aux->grupa,aux->an,aux->medie);
        aux=aux->next;
    }
}
void interschimba(student *a,student *b){
    student aux;
    student *aNext = a->next;
    student *bNext = b->next;
    memcpy(&aux,a,sizeof(student));
    memcpy(b,&aux,sizeof(student));
    a->next=aNext;
    b->next=bNext;
    return;
}

void sortare(student **head){
    int ok=0;
    while(ok==0){
        ok=1;
        student *aux = *head;
        while(aux!=NULL){
            if(strcmp(aux->nume,aux->next->nume)>0){
                ok=0;
                interschimba(aux,aux->next);
                }
            }
            if(aux->next->next==0){ break;
            aux=aux->next;
            }
        }
    }


int main()
{
    student *head;
    head=NULL;
    int n;
    scanf("%d",&n);
    char nume[30];
    int i,grupa,an;
    float medie;
    for(i=0; i<n; i++)
    {
        scanf("%s %d %d %f",nume,&grupa,&an,&medie);
        inserare(&head,nume,grupa,an,medie);
    }
    afisare(&head);
    sortare(&head);
    afisare(&head);
    return 0;
}
/*
Dani 151 1 9
Alex 151 2 10
Marius 152 1 7
*/
