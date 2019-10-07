#include <stdio.h>
#include <stdlib.h>

typedef enum {false, true} bool;
void citire_matrice_triunghiulara(int **mat, int *n, bool sup)
{
	printf("Dimensiune matrice=");
	scanf("%d", n);
	int nr_elemente = ((*n) * ((*n)+1))/2;
	*mat = (int *)malloc(nr_elemente * sizeof(int));
	int offset=0;
	for (int i=0;i<*n;i++)
	{
		for (int j = 0; j<=(sup ? (*n)-i-1 : i); j++) {
			printf("Mat[%d][%d]=", i, j);
			scanf("%d", (*mat)+offset);
			offset++;
		}
	}
}
int get_value_matrice_triunghiulara(int *mat,int i, int j, int n, bool sup)
{
	int offset=0;
	if (sup)
	{
		if (j<i) return 0;
		offset = i*n - (i*(i-1))/2;
	    offset -= i;
	}
	else
	{
		if (j>i) return 0;
		offset = (i*(i+1))/2;
	}
	offset += j;
	return mat[offset];
}
int* rezultat_produs(int *mat1, bool sup1, int *mat2, bool sup2, int n)
{ //poate fi modificat pt a permite si inmultirea cu matrici netriunghiulare sau inmultire pt matrici nepatratice
	int* rezultat = (int *)malloc(n * n * sizeof(int));
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			rezultat[i*n+j] = 0;
			for (int k=0;k<n;k++)
			{
				rezultat[i*n+j] += get_value_matrice_triunghiulara(mat1,i,k,n,sup1) * get_value_matrice_triunghiulara(mat1, k, j,n,sup2);
			}
		}
	}
	return rezultat;
}
void afisare_matrice(int *mat, int n, bool sup, bool triunghiulara)
{
	if (triunghiulara==true) {
		if (sup) puts("Afisam o matrice superior triunghilara:");
		else {puts("Afisam o matrice inferior triunghilara:");}

		int offset=0;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<i && sup;j++)
			{
				printf("0 ");
			}
			for (int j = 0; j<=(sup ? n-i-1 : i); j++) {
				printf("%d ", mat[offset]);
				offset++;
			}
			for (int j=0;j<(n-i-1) && !sup;j++)
			{
				printf("0 ");
			}
			puts("");
		}
	}
	else {
		puts("Afisam o matrice patratica");
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<n;j++)
				printf("%d ", *(mat + i*n + j));
			puts("");
		}
	}
}
int main()
{
	int* matrice_sup;
	int* matrice_inf;
	int n_sup, n_inf;

	citire_matrice_triunghiulara(&matrice_sup, &n_sup, true);
	citire_matrice_triunghiulara(&matrice_inf, &n_inf, false);

	afisare_matrice(matrice_sup, n_sup, true, true);
	afisare_matrice(matrice_inf, n_inf, false, true);

	if (n_sup!=n_inf)
	{
		puts("Cele doua matrice au marimi diferite");
		return -1;
	}
	int* matrice_rezultat_1, *matrice_rezultat_2;


	matrice_rezultat_1 = rezultat_produs(matrice_sup, true, matrice_inf, false, n_sup);

	matrice_rezultat_2 = rezultat_produs(matrice_inf, false, matrice_sup, true, n_sup);

	afisare_matrice(matrice_rezultat_1, n_sup, false, false);
	afisare_matrice(matrice_rezultat_2, n_sup, false, false);

	free(matrice_sup);
	free(matrice_inf);
	free(matrice_rezultat_1);
	free(matrice_rezultat_2);

	return 0;
}
}
