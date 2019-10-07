#include <stdio.h>
#include <stdlib.h>


union uniune{
int x;
unsigned char c[4];
};
//extragere 4 octeti
int main()
{   int i;
    union uniune a;
    scanf("%d",&a.x);
    unsigned char v[4];
    for(i=0;i<4;i++){
        v[i]=a.c[i];
    }
    for(i=3;i>=0;i--){
        printf("%d ",v[i]);
    }
    return 0;
}
//ex: 23423 => 0 0 91 127
