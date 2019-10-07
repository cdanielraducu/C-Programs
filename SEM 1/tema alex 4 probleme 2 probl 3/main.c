#include <stdio.h>
#include <stdlib.h>

int main()
{   int c[100];
    int i=0;
    FILE *f = fopen("date.in","r");
    fscanf(f,"%d",&c[i]);
    printf("%d\n",c[i]);
    while(1)
    {
        fscanf(f,"%d",&c[i]);
        if(c[i] != ' ') i++;
    if(feof(f)) break;
    }
    fclose(f);
     int n=i-1,j=0,l=0,max,aux;
     for(i=0;i<n;i++)
    printf("%d ",c[i]);
    printf("\n");
    for(j=0;j<n;j++)
    {for(i=0;i<n;i++)
        {if(c[j]<c[i]) {l++;
        aux[k]=c[j];
        for(i=0;i<n;i++) if(aux[k]<c[i]).........
        printf("%d vs %d ",c[j],c[i]);}}
        printf("\n"); l=0;
        }
    for(j=0;j<n;j++)
//       {if(l[j]>max) max = l[j];}
  //  printf("%d  \n",max);
    return 0;
}
