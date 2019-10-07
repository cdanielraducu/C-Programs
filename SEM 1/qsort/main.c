#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nume[30];
    int varsta;
}student;
//descrescator dupa varsta
int cmp(void *arg1,void *arg2){
    student *a = (student*)arg1;
    student *b =(student*)arg2;
    return b->varsta - a->varsta;
}

//crescator dupa varsta
int cmp_cresc(void *arg1,void *arg2){
    student *a = (student*)arg1;
    student *b =(student*)arg2;
    return a->varsta - b->varsta;
}
//crescator dupa nume
int cmp_nume(void *arg1,void *arg2){
    student *a = (student*)arg1;
    student *b =(student*)arg2;
    return strcmp(b->nume,a->nume);
}
int main()
{   student p[10]; int i;
    strcpy(p[0].nume,"Dani");
    p[0].varsta = 10;
    strcpy(p[1].nume,"Alex");
    p[1].varsta = 20;
    for(i=0;i<2;i++)
        printf("%s %d\n",p[i].nume,p[i].varsta);
    qsort(p,2,sizeof(student),cmp);
    printf("\n\n");
    for(i=0;i<2;i++)
        printf("%s %d\n",p[i].nume,p[i].varsta);
    qsort(p,2,sizeof(student),cmp_cresc);
        printf("\n\n");
    for(i=0;i<2;i++)
        printf("%s %d\n",p[i].nume,p[i].varsta);
        qsort(p,2,sizeof(student),cmp_nume);
        printf("\n\n");
    for(i=0;i<2;i++)
        printf("%s %d\n",p[i].nume,p[i].varsta);
    return 0;
}
