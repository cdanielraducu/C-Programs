#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *f;
    f = fopen("fisier.txt","r ");
    if ( f==NULL) printf("Nu s-a deschis!");
    int i;
    char sir[30];
    fgets(sir,17,f);
    printf("%s",sir);
    for(i=0;i<strlen(sir);i++)
    {
        if(sir[i]>='a' && sir[i]<='z')
            sir[i] =sir[i] - 32;
        else
            sir[i] = sir[i] + 32;

    }
    for(i=0;i<strlen(sir);i++)
        printf(" %c", sir[i]);
    return 0;
}
