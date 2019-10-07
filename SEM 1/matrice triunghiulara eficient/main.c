#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRM_SIZE(dim) (((dim)*(dim+1))/2)
#define TRM_OFFSET(r,c) (TRM_SIZE((r)-1)+(c))
#define TRM_INDEX(m,r,c) (m)[(TRM_OFFSET((r),(c)))]
#define TRM_UINDEX(m,r,c,d) (m)[(TRM_SIZE(d)-TRM_SIZE((d)-(r))+(c)-(r))]



int main (void)
{
    int dimensiune;
    int *infTr, *supTr, *matRezultat;
    printf ("Dimensiunea matricei: ");
    scanf ("%2d", &dimensiune);

    infTr = calloc(TRM_SIZE(dimensiune), sizeof(int));
    supTr = calloc(TRM_SIZE(dimensiune), sizeof(int));
    matRezultat = calloc(dimensiune*dimensiune, sizeof(int));

    time(NULL);
    srand (time(NULL));
    srand (0);
    for (int i = 0; i < TRM_SIZE(dimensiune); i++){
        infTr[i] = 100.0*rand() / RAND_MAX;
        supTr[i] = 100.0*rand() / RAND_MAX;
    }
    for (int i = 0; i < dimensiune; i++)
    {
        for (int j = 0; j < dimensiune; j++)
        {
            for (int k = 0; k < dimensiune; k++)
            {  matRezultat[i*dimensiune + j] +=
                TRM_INDEX(infTr, i, k) *
                TRM_UINDEX(supTr, k, j, dimensiune);
            }
        }
    }

    puts ("Inferior triunghiulara");
    for (int i = 0; i < dimensiune; i++)
    {
        for (int j = 0; j < dimensiune; j++)
        {
            printf (" %2d", TRM_INDEX(infTr, i, j));
        }
        putchar ('\n');
    }

    puts ("Superior triunghiulara");
    for (int i = 0; i < dimensiune; i++)
    {
        for (int j = 0; j < dimensiune; j++)
        {
            printf (" %2d", TRM_UINDEX(supTr, i, j, dimensiune));
        }
        putchar ('\n');
    }

    puts ("Rezultat");
    for (int i = 0; i < dimensiune; i++)
    {
        for (int j = 0; j < dimensiune; j++)
        {
            printf (" %4d", matRezultat[i*dimensiune + j]);
        }
        putchar ('\n');
    }

    free (supTr);
    free (infTr);
    free (matRezultat);
    return 0;
}

