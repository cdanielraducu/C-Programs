#include <stdio.h>
#include <stdlib.h>

// a) Adaugati campuri structurii student si scrieti in fisier cel putin 2 instante
// b) Modificati campurile direct in fisier
// c) Cititi fisierul pentru a verifica schimbarile

struct student
    {int id;
     char nume[20];
     char prenume[20];
     float medie;
    };
int main()

{
int i = 200;
struct student s[10],s1;
FILE *f = fopen("binar.bin","w+b");
char aux[30]; strcpy(aux,"Vasiloiu");

s[0].id=10;
strcpy(s[0].nume,"Vasile");
strcpy(s[0].prenume,"Ghita");
s[0].medie=9.50;

fwrite(s,sizeof(s[0]),1,f);
//fseek(f,7,SEEK_SET);
//fwrite(aux,sizeof(aux),1,f);

fseek(f,0,SEEK_SET);

fread(&s1,sizeof(s1),1,f);

printf("%s",s1.nume);

return 0;
}
