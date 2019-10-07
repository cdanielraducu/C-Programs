#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x;
    struct produs* next;
} produs;

void insert(int x,int n)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    produs **head;
    aux->x=x;
    aux->next=NULL;
    if(n==1)
    {
        aux->next=*head;
        *head = aux;
    }
    else
    {
        produs* aux2=*head;
        int i;
        for(i=0; i<n-2; i++)
        {
            aux2=aux2->next;
        }

        aux->next=aux2->next;
        aux2->next = aux;

        }
    }
    void afisare(produs **head)
    {
        produs* aux= *head;
        while(aux!=NULL)
        {
            printf("%d",aux->x);
            aux=aux->next;
        }
        printf("\n");
    }
    int main()
    {
        produs *head;
        head=NULL;
        insert(2,1);
        insert(3,2);
        insert(4,1);
        insert(5,2);
        afisare(&head);
        return 0;
    }
