#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char nume[50],categoria[30];
    int pret;
    int stoc;

} produs;

void citire(FILE *f,produs *p, int nr)
{
    int i;
    for(i=0; i<nr; i++)
    {
        printf("dati datele produsului[%d]: denumirea,categoria,pret,stocul\n",i);
        scanf("%s %s %d %d",p[i].nume,p[i].categoria,&p[i].pret,&p[i].stoc);
    }
}

void salvare(FILE *f, produs *p,int nr)
{
    f = fopen("date.bin","wb");
    fwrite(p,sizeof(produs),nr,f);
    fclose(f);
}

void modificaPret(produs *p,int nr)
{
    int i;
    for(i=0; i<nr; i++)
    {
        p[i].pret +=10;
    }
}

void sortare(produs*p,int nr)
{    produs aux;
    int i,j;
    for(j=0;j<nr;j++)
    for(i=0;i<nr-1;i++)
    {
        if(p[i].categoria<p[i+1].categoria)
        {
            aux=p[i];
            p[i]=p[i+1];
            p[i+1]=aux;
        }

    }
}

int main()
{
    FILE *f;
    int nr,i;
    f= fopen("date.bin","wb");
    produs p[5];
    scanf("%d",&nr);
    citire(f,p,nr);

    modificaPret(p,nr);
    printf("Inainte de sortare\n");
    for(i=0; i<nr; i++)
    {
        printf("#[%d] %s %s %d %d\n",i,p[i].nume,p[i].categoria,p[i].pret,p[i].stoc);
    }
    printf("Dupa sortare\n");
    sortare(p,nr);
    for(i=0; i<nr; i++)
    {
        printf("#[%d] %s %s %d %d\n",i,p[i].nume,p[i].categoria,p[i].pret,p[i].stoc);
    }
    salvare(f,p,nr);
    return 0;
}
/*
Samsung Bun 1000 10
Iphone Scump 2000 5
Huawei Eh 1500 8
*/
