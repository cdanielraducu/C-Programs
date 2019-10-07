#include <stdio.h>
#include <stdlib.h>
typedef  struct
{
    int data;
    struct produs *next;
} produs;

void inserare_inceput(produs **head,int x)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    aux->data=x;
    aux->next=*head;
    *head=aux;

}
void inserare_sfarsit(produs **head,int x)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    produs *sf;
    sf=*head;
    aux->next=NULL;
 aux->data=x;
    if(*head=NULL){
        aux->next=NULL;
        *head=aux;
        return;
    }

    while(sf->next!=NULL)
    {
        sf=sf->next;
    }
printf("a");

    (sf)->next=aux;


}
void inserare_oarecare(produs **head,int x,int poz)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    produs *inc,*sf;
    inc = *head;
    int i;
    if(poz==0)
    {
        aux->data=x;
        aux->next=*head;
        *head=aux;
        return;
    }

    for(i=0; i<poz-1; i++)
    {
        inc=inc->next;
        if(inc==NULL)
            return;
    }
    sf=inc->next;
    aux->data=x;
    inc->next=aux;
    aux->next=sf;
}

void stergere_oarcare(produs **head,int poz1){
    produs *pozitie,*pozitie2,*aux; int i;
    if(poz1==0){
            pozitie=*head;
            *head=pozitie->next;
            return;
    }


    pozitie=*head;
    pozitie2=*head;
    for(i=0;i<poz1-1;i++){
            pozitie=pozitie->next;

    }
    for(i=0;i<poz1+1;i++){
        pozitie2 = pozitie2->next;
        if(pozitie2==NULL) return;
    }
    aux=pozitie->next;
    pozitie->next=pozitie2;
    free(aux);


}

void stergere(produs **head,int poz1,int poz2)
{
    produs *aux=(produs*)malloc(sizeof(produs));
    produs *inc,*sf;
    inc = *head;
    sf = *head;
    int i,n,k;
    for(i=0; i<poz1-1; i++)
    {
        inc=inc->next;
        if(inc==NULL)
            return;
    }
    for(i=0; i<poz2-2; i++)
    {
        sf=sf->next;
        if(sf==NULL)
            return;
    }
    n=0;
    aux = *head;
    while(aux != NULL){
        n++;
        aux=aux->next;

    k=poz2-poz1-1;
    printf("%d %d\n",n,k);
    if(n-k<3)
    {    printf("aaaa\n");
        inc->next=sf;
    }
    else
    {    printf("aaaaaaaaaaaa\n");
        inc->next=sf->next;
    }
}
}
void stergere_final(produs **head)
{
    produs *aux;
    aux=*head;
    if(aux->next==NULL){
        *head=NULL;
        return;
    }
    int n=0,i;
    while(aux->next != NULL){
        aux=aux->next;
        n++;
    }
    aux=*head;
    for(i=0;i<n-1;i++)
    {
        aux=aux->next;
    }
    free(aux->next);
    aux->next = NULL;
}

void afisare(produs **head)
{
    produs *aux;
    aux=*head;
    printf("List is: ");
    while(aux != NULL)
    {
        printf("%d ",aux->data);
        aux=aux->next;
    }
    printf("\n");
}


int main()
{
    produs *head,*sf;
    head=NULL;
    sf=NULL;
    int c,i,n,poz,poz1,poz2;
    printf("cate noduri sa bagi la inceput\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&c);
        inserare_sfarsit(&head,c);
        afisare(&head);

    }
   /* fflush(stdin);
    printf("cate noduri sa bagi la sfarsit\n");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&c);
        inserare_sfarsit(&head,c);
        afisare(&head);
    }
    fflush(stdin);
    printf("cate noduri vrei sa bagi pe o pozitie oarecare\n");
    scanf("%d",&n);
    printf("si pozitia:\n");
    scanf("%d",&poz);
    for(i=0; i<n; i++)
    {
        scanf("%d",&c);
        inserare_oarecare(&head,c,poz);
        afisare(&head);
    }
    printf("de unde pana unde vrei sa stergi\n");
    scanf("%d %d",&poz1,&poz2);
    stergere(&head,poz1,poz2);
    afisare(&head);
*/
    int pozitie;
    scanf("%d",&pozitie);
    stergere_oarcare(&head,pozitie);
    afisare(&head);
    return 0;
}
