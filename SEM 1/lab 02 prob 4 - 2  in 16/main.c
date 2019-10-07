#include <stdio.h>
#include <stdlib.h>
//din 2 in 16

    int v[50], v2[30];

int main()
{   int n,i=0,j=0;
    scanf("%d", &n);
    while(n)
    {
        v2[j]=n%10000;
        n/=10000;
        j++;

    }
    for(i=j;i>=0;i--)
    {
        switch(v2[i])
        {
            //case 0000 : printf("0"); break;
            case 1 : printf("1"); break;
            case 10 : printf("2"); break;
            case 11 : printf("3"); break;
            case 100 : printf("4"); break;
            case 101 : printf("5"); break;
            case 110 : printf("6"); break;
            case 111 : printf("7"); break;
            case 1000 : printf("8"); break;
            case 1001 : printf("9"); break;
            case 1010 : printf("A"); break;
            case 1011 : printf("B"); break;
            case 1100 : printf("C"); break;
            case 1101 : printf("D"); break;
            case 1110 : printf("E"); break;
            case 1111 : printf("F"); break;


        }
    }
    return 0;
}
