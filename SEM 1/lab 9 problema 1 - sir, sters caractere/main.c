#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *sterg(char* p, int poz, int cate)
{
    scanf("%d %d",&poz,&cate);
    int i=poz,j;
    while(cate!=0)
    {
        p[i] = ' ';
        i++;
        cate--;
    }
    for(j=0; j<strlen(p); j++)
        for(i=0; i<strlen(p); i++)
            if(p[i]==' ' && p[i+1]== ' ')
            {
                for(i; i<strlen(p)-1; i++)
                {
                    p[i] = p[i+1];
                }
                p[strlen(p)-1]='\0';
            }
    return p;
}
char *inserez(char *p,char *s)
{
    int i,j,k=0,n,poz;
    scanf("%d",&poz);
    n = strlen(p);
    for(i=poz; i<n; i++)
    {
        if(p[i]== ' ' && p[i+1]== ' ')
        {
            p[i+1]=s[k++];
        }
        else
        {
            n++;
            for(j=n; j>i; j--)
            {
                p[j]=p[j-1];
            }
        }
    }
    return p;

}

int main()
{
    int poz=0,cate=0;
    char p[100];
    char *pr;
    gets(p);
    pr = sterg(p,poz,cate);
    printf("%s\n",pr);
    // de ce cu pr?
    char s[100];
    scanf("%s",s);
    pr = inserez(p,s);

    return 0;
}
