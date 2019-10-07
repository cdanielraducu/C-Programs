#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,i,j,l1=0,l2=0,v[100];
    scanf(" %d",&n);
    while(n)
    {
        if(n%2==0)
           { v[l1] = 0;
         l1++;}
        else
            {v[l1] = 1;
        l1++;}
        n=n/2;
    }
    printf("in binar n este:");
    for(i=l1-1; i>=0; i--)
    {
        printf(" %d", v[i]);
    }
    printf("\n=============================\n");
    scanf(" %d",&x);
    while(x)
    {
        if(x%2==0)
           { v[l2] = 0;
         l2++;}
        else
            {v[l2] = 1;
        l2++;}
        x=x/2;
    }
    printf("in binar x este:");
    for(i=l2-1; i>=0; i--)
    {
        printf(" %d", v[i]);
    }
    printf("\n=============================\n");
    int p;
    printf("dati valori lui p ( pozitia  mai mica decat 5)\n");
    scanf("%d", &p);
    printf("pozitia de pe care se vor schimba valorile lui n este: %d",p);
    printf("\n=============================\n");
    int N;
    printf("dati valoare lui N ( numarul de biti care se vor copia din x )\n");
    scanf(" %d", &N);
    printf("se vor copia ultimii %d biti", N);
    printf("\n=============================\n");
    for(i=0;i<p;i++)
    { for(j=0;j<n;j++)
      {
          v[i] = v[j];
      }

    }
    for(i=l1-1;i>=0;i--)
    {
        printf(" %d",v[i]);
    }
    return 0;
}
