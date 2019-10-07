#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("fisier.txt","r");
    if (f==NULL)
        printf("nu s-a deschis!");
    char sir[30];
    int i;
    fgets(sir,17,f);
    printf("%s",sir);
    for(i=0; i<strlen(sir);i++)
//2 vectori
//1 pentru fiecare litera din alfabet
//2 si celalat pentru un contor pentru fiecare
// si faci o functie care sa adauge +1 la fiecare contor pentru fiecare litera gasita
// apoi maximul pentru ele, iar pentru litere care apar de la fel de multe ori trb sa le afisezi pe amandoua
// +indiferenta de litere mari sau mici sa le schimbe in litere mici pe toate ca sa fie luat ca un singur careacter
    return 0;
}
