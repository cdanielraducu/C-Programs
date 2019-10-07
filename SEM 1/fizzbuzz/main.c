#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
for(i=1;i<101;i++)
{
    if(i%15==0)
        printf("FizzBuzz\t");
    if(i%5==0)
        printf("Buzz\t");
    if(i%3==0)
        printf("Fizz\t");
    if((i%3==0) && (i%5)==0)
        printf("%d\t",i);
}



    return 0;
}
