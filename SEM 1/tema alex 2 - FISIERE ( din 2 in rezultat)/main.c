#include <stdio.h>
#include <stdlib.h>

void citeste (FILE** v, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        char s[100];
        scanf("%s",s);
        v[i]=fopen(s,"r");
    }
}

FILE *concatanare(FILE** w, int n)
{
    FILE * rezultat;
    rezultat=fopen("rezultat.txt","w+");
    char p;
    int i;
    for(i=0; i<n; i++)
    {
        while(fscanf(w[i],"%c",&p) !=EOF)
            fprintf(rezultat,"%c",p);
        fclose(w[i]);
    }
    return rezultat;

}

void afisare(FILE* v)
{
    char p;
    fseek(v,0,0);
    while(fscanf(v,"%c",&p) !=EOF)
        fprintf(stdout,"%c",p);
}

int main()
{
    int n;
    FILE *k;
    scanf("%d",&n);
    FILE *v[100];
    citeste(v,n);
    k = concatanare(v,n);
    afisare(k);

    return 0;
}
