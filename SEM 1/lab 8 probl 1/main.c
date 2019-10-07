#include <stdio.h>
#include <stdlib.h>

struct complex{
int r;
float i;
void (*citire)(struct complex *nr);
void (*afisare)(struct complex *nr);

};
void citire_complex(struct complex *nr)
{
 scanf("%d %f",&nr->r,&nr->i);
}

void afisare_complex(struct complex *nr) {
printf("partea reala a numarului complex este: %d\n", nr->r);
printf("partea imaginara a numarului complex este: %.2f\n", nr->i);
}

void adunare(int s,int S, struct complex *nr1,struct complex *nr2)
{
    s= nr1->r + nr2->r;
    S=nr1->i +nr2->i;

}

int main()
{
  struct complex nr1,nr2,c,d;
  c.citire=&citire_complex;
  c.citire(&nr1);
  c.citire(&nr2);
  d.afisare=&afisare_complex;
  d.afisare(&nr1);
  d.afisare(&nr2);
 int s=0,S=0;
 adunare(s,S,nr1,nr2);

    return 0;
}
