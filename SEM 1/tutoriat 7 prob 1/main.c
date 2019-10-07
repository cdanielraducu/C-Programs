#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comprimare (char *s,int l)
{
 int i,nr=1;
 for(i=1;i<l;i++)
{ nr++;
    if(s[i]==s[i+1])
        {for(i=1;i<lungime-1;i++)
            s[i]=s[i+1];}
printf("%s\n",s);
}




 return strlen(s);
}

int main()
{   int i,nr=0;
    char s[100];
    scanf("%s",s);
    printf("%s\n",s);
    for(i=0;i<strlen(s);i++)
    {
        nr++;
    }
    printf("%d\n",nr);
    nr =0;
    nr = comprimare(s,nr);
    printf("%d",nr);
    return 0;
}
