#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o; int a,b;
    scanf("%d %c %d",&a,&o,&b);
    switch (o){
    case('+') : printf("%d + %d = %d",a,b,a+b); break;
    case('-') : return a-b; break;
    case('*') : return a*b; break;
    default : printf("Nu ati introdus bine");
    }
    return 0;
}
