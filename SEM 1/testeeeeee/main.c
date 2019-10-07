#include <stdio.h>
#include <stdlib.h>

typedef struct{
char nume[30];

}student;

int main()
{
    student *studenti;
    int n;
    scanf("%d",&n);
    studenti=(student*)malloc(sizeof(student)*n);
     return 0;
}
