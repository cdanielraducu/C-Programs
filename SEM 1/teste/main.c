#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *f= fopen("fisiert.txt","w");
    int x;

    if ( f==NULL) fprintf(stdin,"\n nu \n");
    while(fscanf(stdin,"%d",&x));
       fprintf(f,"%d\n",x);
       fclose(f);

       f = fopen("fisiert.txt.","r");
       while(fscanf(f,"%d",&x));
       fprintf(stdout,"%d\n",x);
       fclose(f);
    return 0;
}
