#include <stdio.h>
#include <stdlib.h>

void var1(char *c,int n)
{
    int i,j;
    for(i=0; i<n; i++)
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
        {
            c = (char*)realloc(c,n+1);

            for(j=n; j>i; j--)
                c[j]= c[j-1];
            n++;
            i++;
        }
printf("%s",c);
}

void var2(char *c,int n)
{ int i,j,k=0;
n=strlen(c);
char *v=(char*)malloc(2*n);
for (i = 0; i < n; i++) {
        if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u') {
            v[k++]=c[i];
            v[k++]=c[i];
        } else {
            v[k++]=c[i];
        }
    }

    v[k]='\0';
    int l=k;
    for(k=0;k<l;k++)
    printf("%c",v[k]);
}

int main()
{
    int n=100;
    //scanf("%d",&n);
    char *c=(char*)malloc(n);

    fgets(c,n,stdin);
  var2(c,n);

        return 0;
    }
