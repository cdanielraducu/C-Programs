#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    f = fopen("fisier.txt","r+");
    if(f==NULL)
        printf("nu s-a deschis!");
    char litera[30];
    char text[20];
    fgets(litera,30,f); printf("%s\n",litera);
    fgets(text,20,f); printf("%s\n",text);
    fclose(f);
    f = fopen("fisier.txt","r+");
    int i;
    fseek(f,1,SEEK_SET);
    int c = fgetc(f);
    printf("\n");
    for(i=0;i<strlen(text);i++)
    {
        if(text[i] == c)
            text[i] = ' ';
    }
    fflush(f);
fseek(f,2,SEEK_SET);
    c = fgetc(f);
    printf("\n");
    for(i=0;i<strlen(text);i++)
    {
        if(text[i] == c)
            text[i] = ' ';
    }
    printf("%s",text);
    return 0;
}
