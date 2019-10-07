#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct candidat{
int nr_legitimatie;
char nume[30];
float nota_mate, nota_info, nota_bac, medie;
}c;

int main()
{   int i,j;
    struct candidat c[100];
    int prag=5,prag2=7; float n,nota[20];
    scanf("%f", &n);
    for(i=0;i<n;i++)
    {  printf("numele: ");
        scanf("%s", &c[i].nume);
        printf("legitimatia: ");
        scanf("%d", &c[i].nr_legitimatie);
    }
    for(i=0;i<n;i++)
    {   printf("pentru candidatul %s | %d | ",c[i].nume, c[i].nr_legitimatie);
        printf("media din bac: ");
        scanf("%f", &c[i].nota_bac); printf("\n");
        printf("nota de la mate: ");
        scanf("%f", &c[i].nota_mate); printf("\n");
        printf("nota de la info/fizica: ");
        scanf("%f", &c[i].nota_info);printf("\n");
        }
    int aux=0;
    for(i=0;i<n;i++)
    {
        nota[i] = (c[i].nota_info+c[i].nota_mate)/2*0.8+ 0.2*c[i].nota_bac;
        printf("nota candidatului %d este %.2f\n",c[i].nr_legitimatie, nota[i]);
    }
    for(j=0;j<n;j++)
           {for(i=0;i<n;i++)
    {
        if(nota[i]>nota[i+1])
        {
            aux=nota[i];
            nota[i]=nota[i+1];
            nota[i+1]=aux;
            printf("nota este %d\n", nota[i]);
        }
    }}
    n = n *0.75;
    for(i=0;i<n;i++)
    {
        printf("candidatul | %d | %s a fost admis la buget\n",c[i].nr_legitimatie,c[i].nume);
    }

    //for(i=0;i<n;i++)
    {
      //  printf("-Numele candidatului %d este : %s  cu ...\n", c[i].nr_legitimatie,c[i].nume);
      //  printf("====================================================================\n");
    }
    return 0;
}
