#include <stdio.h>
#include <stdlib.h>
struct candidat{
int nr_legitimatie;
float nota_mate,nota_info,nota_bac,medie;
char nume, admis, buget;
}c1;

int main()
{
  struct candidat c1;
  printf("numarul de legitmatie...");
  scanf("%d\n",&c1.nr_legitimatie);
  printf("%d\n",c1.nr_legitmatie);
  printf("Scrie notele de la: BAC,EX MATE, EX INFO");
  scanf(" %f\n %f\n %f\n",&c1.nota_bac,&c1.nota_mate,&c1.nota_info);
  printf("%f\n %f\n %f\n",c1.nota_bac,c1.nota_mate,c1.nota_info);

    return 0;
}
