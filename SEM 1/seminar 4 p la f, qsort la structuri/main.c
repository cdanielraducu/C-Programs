#include <stdio.h>
#include <stdlib.h>
//problema pentru examen
struct student
{
    char nume[50];
    int varsta;
    float medie;
};
int cmp_varsta(void *arg1,void *arg2)
{
 struct student *a=(struct student*)arg1;
 struct student *b=(struct student*)arg2;
 return b->varsta - a->varsta;
}
int cmp_nume(void *arg1,void *arg2)
{
    struct student *a=(struct student*)arg1;
 struct student *b=(struct student*)arg2;
 return strcmp(a->nume,b->nume);
}
int cmp_medie(void *arg1,void *arg2)
{
    struct student *a= (struct student*)arg1;
    struct student *b=(struct student*)arg2;
    if(b->medie==a->medie)
          return strcmp(a->nume,b->nume);
    return b->medie-a->medie;

}

int main()
{
    struct student s[20];
    int i;
    int n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s %d %f",&s[i].nume,&s[i].varsta,&s[i].medie);
        printf("\n");
    }
    printf("persoanele introduse sunt: \n");
    for(i=0;i<n;i++)
    {
        printf("%s %d %f\n",s[i].nume,s[i].varsta,s[i].medie);
    }
    printf("\nordonati dupa varsta: \n");
    qsort(s,n,sizeof(struct student),cmp_varsta);
    for(i=0;i<n;i++){
    printf("%s %d %f\n",s[i].nume,s[i].varsta,s[i].medie);}
    printf("\n ordonati dupa nume: \n");
    qsort(s,n,sizeof(struct student),cmp_nume);
    for(i=0;i<n;i++)
       printf("%s %d %f\n",s[i].nume,s[i].varsta,s[i].medie);
    printf("\nordonati dupa medie: \n");
    qsort(s,n,sizeof(struct student),cmp_medie);
    for(i=0;i<n;i++)
        printf("%s %d %f\n",s[i].nume,s[i].varsta,s[i].medie);
    return 0;
}
