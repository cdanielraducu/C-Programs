#include <stdio.h>
#include <stdlib.h>

#define LOW 0
#define UP 300
#define STEP 20

int main()
{   int fahr;
   for(fahr=LOW;fahr<=UP;fahr+=STEP)
    printf("%d %6.2f\n", fahr, (5.0/9.0)*(fahr-32));

    return 0;
}
