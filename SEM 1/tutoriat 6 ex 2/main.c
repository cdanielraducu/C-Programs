#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int val;
    struct produs *next;
}produs;

void inserare(produs **head,int val)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    aux->val=val;
    aux->next=*head;
    *head=aux;
}
void afisare(produs **head)
{
    produs *aux;
    aux=*head;
    printf("List is: ");
    while(aux!=NULL){
        printf("%d ",aux->val);
        aux=aux->next;
    }
}

int main()
{
    produs *head;
    head=NULL;
    int x; char c;
    printf("Enter to start\n");
    while(c=getchar() != EOF)
    {   printf("ce numar vreti sa introduceti?\n");
        scanf("%d",&x);
        inserare(&head,x);
        printf("Ctrl+z to end/Enter to continue\n");
        fflush(stdin);
    }
    afisare(&head);
    produs *aux;
    aux = head;

    printf("\nprima lista este: ");
    while(aux!=NULL){
        if((aux->val%2)==0){
            printf("%d ",aux->val);
            aux=aux->next;
            }
            else aux=aux->next;

    }
    produs *aux2;
    aux2=head;
fflush(stdin);
    printf("\nA doua lista este: ");
    while(aux2 != NULL){
        if((aux2->val)%2==0){ aux=aux->next;}
        else{
            printf(" %d",aux2->val);
            aux2=aux2->next;
        }
    }

    return 0;
}
