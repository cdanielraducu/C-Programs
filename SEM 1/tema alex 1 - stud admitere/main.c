#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nume[30];
    char prenume[30];
    int grupa;
    float nota_laborator,nota_examen,nota_finala;
    unsigned int trecut:1
} student;

void calcNota(student *x,int n)
{   int i;
    for(i=0;i<n;i++)
         {x[i].nota_finala= 0.65*x[i].nota_examen + 0.35*x[i].nota_laborator;
         printf("%f\n",x[i].nota_finala);
         }
for(i=0;i<n;i++)

    { calcReusit(x,i);
        if(x[i].trecut)
        printf("%s cu nota %.2f a trecut\n",x[i].nume,x[i].nota_finala);
    else printf("%s cu nota %.2f nu a trecut\n",x[i].nume,x[i].nota_finala);}



}
void calcReusit(student *x,int j)
{

    if(x[j].nota_finala>=5) x[j].trecut = 1;
    else x[j].trecut = 0;
}

void sortare(student *x,int n)
{   student aux;
    int i,j;

    for(j=0;j<n;j++)
    for(i=0;i<n-1;i++)
    {
       if(x[i].nota_finala<x[i+1].nota_finala)
            {aux=x[i];
            x[i]=x[i+1];
            x[i+1]=aux;}
    }

}

int main()
{   int n,i;
    student x[100];
    printf("cati studenti:\n"); scanf("%d",&n);
    printf("datele studentilor: nume, prenume, grupa, nota_lab, nota_examen\n");
    for(i=0;i<n;i++)
        {scanf("%s %s %d %f %f",x[i].nume,x[i].prenume,&x[i].grupa,&x[i].nota_laborator,&x[i].nota_examen);
        printf("\n");}
         printf("INAINTE \n \n");
    calcNota(x,n);
    sortare(x,n);
    printf("\n \n \n");
    printf("DUPA \n \n");
for(i=0;i<n;i++)
        printf("%s %s %d %.2f \n",x[i].nume,x[i].prenume,x[i].grupa,x[i].nota_finala);
    return 0;
}
