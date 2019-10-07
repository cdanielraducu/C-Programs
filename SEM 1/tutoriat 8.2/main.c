#include <stdio.h>
#include <stdlib.h>

typedef struct{
int val;
struct produs *next;
struct produs *ant;
}produs;


void inserare(produs **head, int val ){
    produs *aux=(produs*)malloc(sizeof(produs));

    aux->val=val;
    aux->next=*head;
    aux->ant=NULL;
    if(*head!=NULL){
      (*head)->ant=aux;
      *head=aux;
      }
    else *head=aux;
    }

void afisare(produs **head){
    produs *aux=*head;
    while(aux !=NULL){
        printf("%d",aux->val);
        aux=aux->next;
    }
}

int main()
{   int x,i,N;
    scanf("%d",&N);
    produs *head;
    head=NULL;
    for(i=0;i<N;i++){
        scanf("%d",&x);
        inserare(&head,x);
    }
    afisare(&head);

    return 0;
}
