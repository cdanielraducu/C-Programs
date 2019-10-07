#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nume[30], prenume[30];
    int varsta, clasa;
    float medie;
} elev;

void citire()
{
    int i;
    elev v[5];
    for (i=0; i<5; i++) {
        printf("Date elev[%d]:\n", i);
        scanf("%s %s", v[i].nume, v[i].prenume);
        scanf("%d %d %f", &v[i].varsta, &v[i].clasa, &v[i].medie);
    }

    FILE *f = fopen("date.bin", "wb");
    fwrite(v, sizeof(elev), 5, f);
    fclose(f);
}

int main()
{
    elev aux;
    elev m[5];
    int i;
    FILE *f = fopen("date.bin", "rb");
    // mutare cursor pt citirea celui de-al 4-lea elev
    fseek(f, 3 * sizeof(elev), SEEK_SET);
    fread(&aux, sizeof(elev), 1, f);
    fprintf(stdout, "Nume: %s %s (%d ani, clasa a %d-a, %.2f)\n\n", aux.nume, aux.prenume, aux.varsta, aux.clasa, aux.medie);

    // afisarea elevilor
    fseek(f, 0, 0);
    fread(m, sizeof(elev), 5, f);
    for(i=0; i<5; i++)
    {
        printf("Date elev[%d]:\n", i+1);
        fprintf(stdout, "\t Nume: %s %s (%d ani, clasa a %d-a, %.2f)\n\n", m[i].nume, m[i].prenume, m[i].varsta, m[i].clasa, m[i].medie);
    }
    fclose(f);
}
