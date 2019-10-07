#include <stdio.h>
#include <stdlib.h>
typedef struct{
char sir1[20];
char sir2[20];
int x;
}entitate;

int main()
{   long unsigned n;
    int i;
    FILE *f = fopen("database.bin","rb");
    fseek(f,0,SEEK_END);
    n=ftell(f);
    entitate x[4];
    printf("sunt %ld entitati\n",n/sizeof(entitate));
    fseek(f,0,0);
    fread(x,sizeof(entitate),4,f);
    for(i=0;i<4;i++)
        printf("%s %s %d\n",x[i].sir1,x[i].sir2,x[i].x);
    fseek(f,0,0);
    int k;
    scanf("%d",&k);
    k--;
    fseek(f,k*sizeof(entitate),0);
    fread(&x[0],sizeof(entitate),1,f);
    printf("%s %s %d\n",x[0].sir1,x[0].sir2,x[0].x);
    fclose(f);
    return 0;
}
