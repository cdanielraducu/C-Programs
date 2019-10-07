#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f;
    f=fopen("fisier.txt","r");
    if(f==NULL)
        printf("nu s-a deschis!");
    int i,j;
    char sir[30];
    char sir2[30];
    fgets(sir,17,f);
    printf("%s\n",sir);
    fgets(sir2,17,f);
    printf("%s\n",sir2);
    for(i=0;i<strlen(sir); i++)
        if(sir[i]== 'b')
    {
        printf(" %c\n",sir[i]);
        for(j=0;j<strlen(sir2);j++)
        {
            if(sir2[j]== 'a')
                sir2[j] = sir[i];
        }
    }
    printf(" %s",sir2);
    return 0;
}
