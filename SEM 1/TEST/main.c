#include <stdio.h>
#include <stdlib.h>


void citeste(FILE *f, char sir[100] )
{   int i,n;
    f = fopen("fisier.txt","r");

    for(i=0;i<n;i++)
    {
        fseek(f,i,SEEK_SET);
        sir[i]= fgetc(f);
    }
}

int main()

{ FILE *f=fopen("fisier.txt","r");
    char sir[100];
    citeste(f,sir);
    printf("%s",sir);
    return 0;
}
