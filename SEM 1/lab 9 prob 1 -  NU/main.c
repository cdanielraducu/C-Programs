#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char sterg(char *p,int poz, int cate)
{    int i,n,l=0;
printf("dati numarul de pe care vreti sa se stearga");
    scanf("%d",&poz);
    printf("\n");

    scanf("%d",&cate);
    printf("\n");
    while(l!=cate)
    {for(i=poz;i<n;i++)
    {
    printf("%d",l);
        p[i]==' ';

        }
        l++;
        }
return p;
}

int main()
{  char (*pf)(char,int,int);
pf = *sterg;
char *sir = (char *)malloc(sizeof(char)), c;
int i=0,poz,cate;
scanf("%d %d",&poz,&cate);
while(c=getchar() !=EOF)
{
    sir[i]=c;
    i++;
    sir = (char*)realloc(sir,(i+1)*sizeof(char));
}
printf("%s",sir);

    return 0;
}
