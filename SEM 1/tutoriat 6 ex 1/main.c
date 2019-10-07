#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int val;
    struct produs *next;
}produs;
void inserare_sf(produs **head,int val){
    produs *aux=(produs*)malloc(sizeof(produs));
    produs *sf;
    sf= *head;
    aux->val=val;
    if(*head==NULL){
        aux->next=*head;
        *head=aux;
        return;
    }

    while((sf)->next!=NULL)
    {
        sf=(sf)->next;
    }
    aux->next=NULL;
    sf->next=aux;
}
void stergere_inceput(produs **head){
    if(*head==NULL)
        return;
    produs *temp;
    temp = *head;
    *head=temp->next;
    free(temp);


}
void afisare(produs **head){
    produs *aux;
    aux = *head;
    printf("Lista: ");
    while(aux != NULL){
        printf("%d ",aux->val);
        aux=aux->next;
    }

}
int main()
{
    int k,n[4],i=0;
    FILE *f = fopen("liste.in","r");
    fseek(f,0,0);
    fscanf(f,"%d",&k);
    printf("K=%d\n",k);
    while(n[i] != EOF){
    fscanf(f,"%d",&n[i++]);
    }
    for(i=0;i<4;i++)
        printf("%d ",n[i]);
    fclose(f);
    printf("\n\n");
    produs *head,*sf;
    head = NULL;
     stergere_inceput(&head);
    for(i=0;i<4;i++){
    inserare_sf(&head,n[i]);
    }
    //stergere_inceput(&head);
    afisare(&head);
    //permutam la stanga cu k
    i=0;
    while(k!=0){
            inserare_sf(&head,n[i]);
            stergere_inceput((&head));
            i++; k--;
    }
    printf("\n\n");
    afisare(&head);
    FILE *g = fopen("liste.out","w");
    produs *aux;
    aux = head;
    for(i=0;i<4;i++){
        fprintf(g,"%d ",aux->val);
        aux=aux->next;
        }
    fclose(g);
    f= fopen("liste.in","r");
    //umblare prin fisier
    /*
    int x;
    fseek(f,((sizeof(char)+1)*4),0);
    fscanf(f,"%d",&x);
    printf("%d",x);
    */
    return 0;
}
