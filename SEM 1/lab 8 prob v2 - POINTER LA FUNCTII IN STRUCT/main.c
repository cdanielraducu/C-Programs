#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct complex{
float real,im;
void(*pafisare)(struct complex *a);
void(*pcitire)(struct complex *a);
};

void citire(struct complex *a)
{scanf("%f %f",&a->real,&a->im);}

void afisare(struct complex *a)
{
    printf("%.2f + i x (%.2f)\n\n",a->real,a->im);
}

struct complex adunare(struct complex *a,int n)
{
    int i;
    struct complex suma;
    for(i=0;i<n;i++)
    {
        suma.real +=a[i].real;
        suma.im +=a[i].im;
    }
    //suma.real/=2;
   // suma.im/=2;
    return suma;

}
void inmultire(struct complex *a,struct complex *q,int n)
{
int i;
q->real=a[0].real;
q->im=a[0].im;

for(i=1;i<n;i++)
  {q->real  =(q->real *a[i].real) - (q->im*a[i].im);
        q->im=(q->im*a[i].real) + (q->real*a[i].im);
        printf("%f %f\n\n", q->real,q->im);
        }


}


int main()
{ struct complex *a,*b;
int i,n;
scanf("%d",&n);

a = (struct complex *) malloc(n*sizeof(struct complex));
for(i=0;i<n;i++){
a[i].pcitire=&citire;
a[i].pafisare=&afisare;
a[i].pcitire(&a[i]);
printf("nr complex este: \n");
a[i].pafisare(&a[i]);
}
struct complex suma;

suma=adunare(a,n);
suma.pafisare=&afisare;
suma.pafisare(&suma);

struct complex produs;
struct complex q;


inmultire(a,&produs,n);
produs.pafisare=&afisare;

produs.pafisare(&produs);

int x,y,l,k;
scanf("%d %d",&l,&k);
for(x=l;x<=k;x++)
    {for(y=l;y<=k;y++)
{
    printf("%d+i*%d",x,y);
}
printf("\n");
}
    return 0;
}
