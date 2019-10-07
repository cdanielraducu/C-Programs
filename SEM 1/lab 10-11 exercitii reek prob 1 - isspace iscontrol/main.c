#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct procent{
int punct,numar,space,upper,lower,control
}x;

int main()
{
    int c;
    while ((c=getchar()) !=EOF && (c !='\n'))
       {
       printf("c e %c\n",c);
       if(iscntrl(c)) x.control++;
       if(isspace(c)) x.space++;
       if(isdigit(c)) x.numar++;
       }
       printf("control = %d\n space = %d\n numar = %d\n",x.control,x.space,x.numar);
    return 0;
}
