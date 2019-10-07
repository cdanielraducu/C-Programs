#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nume[30],eticheta[10];
    float pret;
    struct produs* next;
} produs;


void inserare(char *nume,char *eticheta,float pret,produs**u)
{
    produs *x=(produs*)malloc(sizeof(produs));

    strcpy(x->nume,nume);
    strcpy(x->eticheta,eticheta);
    x->pret=pret;
    x->next=NULL;
    // printf("%s %.2f %p\n\n",(x)->nume,(x)->pret,(x)->next);
    if(*u!=NULL)
        (*u)->next = x;
    *u=x;
    //printf("%s %.2f %p",(*u)->nume,(*u)->pret,(*u)->next);
}
void afisare(produs **head)
{
    produs *aux;
    aux = *head;
    while(aux!=0)
    {
        printf("%s %s %.2f\n",aux->nume,aux->eticheta,aux->pret);
        aux=aux->next;
    }

}
void stergere(produs **head, produs **sf)
{
    produs *p;
    produs *aux,*ant;
    aux=*head;
    ant=*head;
    char c;
    fflush(stdin);
    printf("\nce caracter?\n");
    scanf("%c",&c);
    while(aux!= NULL)
    {  //if(h<3){
    //v[h].nume=aux->nume;
    //h++;
    }
        if(c==aux->nume[0])
        {
            if(aux->next==NULL)
            {
                ant->next=NULL;
                free(aux);
                *sf=ant;   //cazul in care se sterge de la final
            }
            else if(ant==aux){
                *head=ant->next;
                free(ant); // cazul in care se sterge de la inceput
            }else
            {
                p=aux;
                ant->next=aux->next;
                aux=ant;
                free(p);
            }
        }

        ant=aux;
        aux=aux->next;
    }
 //verifici daca sunt mai putin de 3, daca nu introduci cu functia de inserare(v[k].nume....) inca 3;

void scriere()
{   int i;
    FILE *f = fopen("data.bin","r+b");
    FILE *g = fopen("fisier.txt","w");
    produs aux;

    for(i=0; i<3; i++)
    {   fread(&aux,sizeof(produs),1,f);
        if(aux.pret>=2000)
        {
            fprintf(g,"#[%d] %s %s %.2f\n",i,aux.nume,aux.eticheta,aux.pret);
        }
    }
    fseek(f,0,SEEK_SET);
    memcpy(aux.nume,"Dani",strlen(aux.nume));
    fwrite(aux.nume,sizeof(produs),1,f);
    fseek(f,(sizeof(aux.nume)+sizeof(aux.eticheta)+sizeof(aux.pret))*2,SEEK_SET);
    memcpy(aux.nume,"Alex",strlen(aux.nume));
    //memcpy(aux.eticheta,"aaaaaaaaaaaaaaaaa",strlen(aux.eticheta));
    fwrite(aux.nume,sizeof(produs),1,f);

    fclose(g);
    fclose(f);

}

void scumpire(produs *p)
{
    p->pret = p->pret+(0.1*p->pret);
    return;
}
void ieftinire(produs *p)
{
    p->pret = p->pret - (0.1*p->pret);
    return;
}
void schimbare_eticheta(produs*p)
{
    char s[20];
    printf("noua eticheta pentru produsul dat\n");
    scanf("%s",s);
    strcpy(p->eticheta,s);
    return;
}
void operatie(produs *p,void(*f)(produs*))
{
    f(p);
}

void concatanare(produs *p)
{
    strcat(p->nume,p->eticheta);
}
void sortare(produs* p,int n)
{
    produs aux;
    int i,j;
    for(j=0; j<n; j++)
        for(i=0; i<n-1; i++)
        {
            if(strcmp(p[i].nume,p[i+1].nume)>0)
            {
                aux = p[i];
                p[i]=p[i+1];
                p[i+1]=aux;
            }

        }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(strcmp(p[i].nume,p[i+1].nume)==0)
            {
                if(strlen(p[i].eticheta)<strlen(p[i+1].eticheta))
                {
                    aux = p[i];
                    p[i]=p[i+1];
                    p[i+1]=aux;
                }
            }
        }
    }

}
//la 2 cum fac sa nu mai fie cuvinte lipite gen SamsungTelefon => Samsung Telefon

int main()
{
    produs p[100];
    int k,c,i,n;
    //c e pentru iesirea din modificari
    printf("cate produse vreti sa introduceti? \n");
    scanf("%d",&n);
    //creare de vectori de structuri

    for(i=0; i<n; i++){
        printf("dati datele produsului: nume, eticheta, pret: \n");
        scanf("%s %s %f",p[i].nume,p[i].eticheta,&p[i].pret);
    }

    //pentru ex1

    printf("\nProdusele inainte de modificare:\n");
    for(i=0; i<n; i++){
        printf("#[%d] %s %s %.2f\n",i,p[i].nume,p[i].eticheta,p[i].pret);
    }

    while(1)
    {
        if(c=getchar() == EOF)
            break;
        else{
            printf("\nalegeti ce operatie vreti sa dati:\n1.Scumpire\n2.Ieftinire\n3.Schimbare Eticheta\n");
            scanf("%d",&k);
            printf("si ce produs?\n");
            scanf("%d",&i);
            i--;
            switch(k){
            case(1) :
                operatie(&p[i],scumpire);
                break;
            case(2) :
                operatie(&p[i],ieftinire);
                break;
            case(3) :
                operatie(&p[i],schimbare_eticheta);
                break;
            default:
                printf("nu ati introdus nici una dintre operatii!\n\n");
                break;
            }
            printf("ati terminat modificarile? apasati <<ctrl+z>>\n\n");
        }
    fflush(stdin);
    }

    printf("Produsele dupa modificare:\n\n");
    for(i=0; i<n; i++){
        printf("#[%d] %s %s %.2f\n",i,p[i].nume,p[i].eticheta,p[i].pret);
    }

    //pentru ex2
    /*
    for(i=0; i<n; i++){
        concatanare(&p[i]);
    }
    sortare(p,n);
    for(i=0; i<n; i++){
        printf("#[%d] %s %.2f\n",i,p[i].nume,p[i].pret);
    }
    */
    //pentru ex4 cu vectori de structuri
    /*
    FILE *f = fopen("data.bin","rb");
    fwrite(p,sizeof(produs),3,f);
    for(i=0; i<n; i++)
    {
        printf("#[%d] %s %s %.2f\n",i,p[i].nume,p[i].eticheta,p[i].pret);
    }
    fclose(f);
    FILE *g = fopen("fisier.txt","w");
    for(i=0; i<n; i++)
    {
        if(p[i].pret>=1000)
        {
            fprintf(g,"#[%d] %s %s %.2f\n",i,p[i].nume,p[i].eticheta,p[i].pret);
        }
    }
    fclose(g);
    */
    /*produs *head,*sf;
    head=sf=0;
    n=0;
    float pret;
    char nume[30],eticheta[30];
    scanf("%d",&n);
    */
    //ex 3 pentru crearea,stergerea si afisarea unei liste
    for(i=0; i<n; i++)
    {
        printf("dati datele:nume,eticheta,pret\n");
        scanf("%s %s %f",nume,eticheta,&pret);
        inserare(nume,eticheta,pret,&sf);
        if(i==0)
            head=sf;
    }
    printf("INAINTE\n\n");
    afisare(&head);
    stergere(&head,&sf);
    printf("DUPA\n\n");
    afisare(&head);

    scriere();
    return 0;
}
/*
Sphone Telefonn 2000
LG Televizor 500
Samsung Telefon 1000

*/
