#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,nivel=0,mare=0,i;
    char ch[100];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {scanf(" %c", &ch[i]);}
    for(i=0;i<n;i++)
    {
        if(ch[i]=='U') nivel++;
        else nivel--;
        printf(" %d", nivel);
        if((ch[i]=='U') && (nivel ==0)) mare++;

    }
    printf("\n%d", mare);
    return 0;
}
