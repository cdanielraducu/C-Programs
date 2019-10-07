#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct student {
 int nr_legitimatie;
 char nume[30];
};

void citire(struct student *s,int *n)
{
    int i;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {   printf("numele si legitimatia\n");
        scanf("%s %d",&s[i].nume,&s[i].nr_legitimatie);
        printf("numele candidatului %d este %s\n",s[i].nr_legitimatie,s[i].nume );

    }
}

void codificare(struct student *s,int n, int cheie, int *codificat)
{   int i;
    citire(s,n);
    for(i=0;i<n;i++)
      { codificat[i]=s[i].nr_legitimatie^cheie;
    printf("nr codificat pentru candidatul %s este %d\n",s[i].nume,codificat[i] );}
}

void scriere_fisier ( FILE*f,int *codificat,int *aux,int n)
{  int i,k=0;
    int nr_cod[30];
struct student s[30];
codificare(s,2,10,nr_cod);

for(i=0;i<n;i++)
    while(codificat[i]!=0)
    {
        aux[k++]=codificat[i]%2;
        codificat[i] /=2;
    }
    for(i=k-1;i>=0;i--)
    {
        (aux[i]!=0) ? fputc('1',f) : fputc('0',f);
    }

    fclose(f);

}

int decodificare(char *nume_fisier,int *v,int n,int cheie)
{int i,j=0,a=0;
    FILE *f = fopen("fisier.txt","r");
    for(i=0;i<n;i++)
    {fseek(f,i,SEEK_SET);
    a=fgets(1,4,f);

    switch(a)
    {
        case(0001) : a=1; break;
        case(0010) : a=2; break;
        case(0011) : a=3; break;
        case(0100) : a=4; break;
        case(0101) : a=5; break;
        case(0110) : a=6; break;
        case(0111) : a=7; break;
        case(1000) : a=8; break;
        case(1001) : a=9; break;
        case(1010) : a=10; break;
        default : a=0; break;
    }
   v[j++]=a;
   a=0;
}
for(i=0;i<j;j++)
return fputc('v[i]',f);
}

int main()
{ int codificat[100],aux[100];
FILE *f = fopen("fisier.txt","w");
//scriere_fisier (f,codificat,aux,2);

int v[100];
decodificare(f,v,2,10);


return 0;
}
