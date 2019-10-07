#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[100];
    int v[500]= {0};
    scanf("%s",s);
    int i;
    char c;
    for(i=0; i<strlen(s); i++){
        if(s[i]>='A' && s[i]<='Z'){
            c=tolower(s[i]);
            if(c>='a' && c<='b'){
                v[c]++;
            }
        }
        else{
            v[s[i]]++;
        }
    }
    for(i=0+'a'; i<0+'z'; i++){
        if(v[i]!=0)
        printf("%d %c\n",v[i],(char)i);
    }
    return 0;
}
