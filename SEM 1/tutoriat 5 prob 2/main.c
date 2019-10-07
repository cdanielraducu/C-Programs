#include <stdio.h>
#include <stdlib.h>

void rotunjire(int *v,int n)
{
printf("%d",n);
        int i,aux=0;
        for(i=0;i<n;i++)
        {
        if(v[i]>=38)
        {
            while(v[i] >= aux  )
            {
                aux = aux+5;
            }

            if(v[i] >= aux -2)
                  v[i]=aux;

        }
        aux=0;
}
}


int main()
{
    int *nota,n,i;
    scanf("%d",&n);
    nota = (int *) malloc(n * sizeof(int));
    printf("dati o nota intre intervalul (0,100) \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&nota[i]);
    }
    printf("notele inainte de rotunjire: \n");
    for(i=0;i<n;i++)
     {
         printf("%d\n",nota[i]);
     }
     printf("notele dupa rotunjire: \n");
     rotunjire(nota,n);
     for(i=0;i<n;i++)
        printf("%d\n",nota[i]);


    return 0;
}
