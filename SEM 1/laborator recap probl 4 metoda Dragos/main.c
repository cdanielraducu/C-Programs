#include <stdio.h>
#include <stdlib.h>

struct nod
{
	int i;
	int j;
	int val;
	struct nod* next;
};
struct matrice
{
	int n;
	int m;
	int nr_elem_nenule;
	struct nod* mat;
};

void adaugare_element(struct nod **L, struct nod *existent, int max_i, int max_j)
{
	struct nod* new = (struct nod*)malloc(sizeof(struct nod));
	if (existent==NULL) {
		do {
		printf("Introduceti coordonatele (i,j,val)=");
		scanf("%d,%d,%d", &new->i, &new->j, &new->val);
		} while(new->i >= max_i || new->i < 0
				|| new->j >= max_j || new->j < 0);
	}
	else *new = *existent;

	new->next = NULL;
	if (*L == NULL) {
		*L = new;
	}
	else
	{
		struct nod *p = *L;
		while (p->next!=NULL)
		{
			p = p->next;
		}
		p->next = new;
	}
}
void citire_matrice(struct matrice **m)
{
	*m = (struct matrice*)malloc(sizeof(struct matrice));
	printf("Numarul de linii=");
	scanf("%d", &(*m)->n);
	printf("Numarul de coloane=");
	scanf("%d", &(*m)->m);
	do {
		printf("Numarul de elemente nenule=");
		scanf("%d", &(*m)->nr_elem_nenule);
	} while((*m)->nr_elem_nenule <= 0 || (*m)->nr_elem_nenule>(*m)->n*(*m)->m);
	for (int i=0;i<(*m)->nr_elem_nenule;i++)
	{
		adaugare_element(&(*m)->mat, NULL, (*m)->n, (*m)->m);
	}
}

struct matrice* inmultire(struct matrice m1, struct matrice m2)
{
	if (m1.m != m2.n) //nonsens
	{
		return NULL;
	}
	struct matrice* rezultat = (struct matrice*)malloc(sizeof(struct matrice));
	rezultat->n = m1.n;
	rezultat->m = m2.m;
	struct nod *p1, *p2, *p3;
	p1 = m1.mat;
	p3 = rezultat->mat;

	while (p1!=NULL)
	{
		p2 = m2.mat;
		while (p2!=NULL){
			if (p1->j == p2->i)
			{
				struct nod *tmp = (struct nod*)malloc(sizeof(struct nod));
				*tmp = *p1;
				tmp->j = p2->j;
				tmp->val *= p2->val;
				tmp->next = NULL;
				aduna_matrice(&rezultat->mat, tmp);
				free(tmp);
			}
			p2=p2->next;
		}
		p1 = p1->next;
	}

	return rezultat;
}

struct matrice* adunare(struct matrice m1, struct matrice m2)
{
	if (m1.n != m2.n || m1.m != m2.m) //nonsens
	{
		return NULL;
	}
	struct matrice* rezultat = (struct matrice*)malloc(sizeof(struct matrice));
	rezultat->n = m1.n;
	rezultat->m = m1.m;

	struct nod *p1, *p2;
	p1 = m1.mat;
	p2 = m2.mat;
	aduna_matrice(&rezultat->mat, p1);
    aduna_matrice(&rezultat->mat, p2);

	return rezultat;
}
void aduna_matrice(struct nod **L, struct nod *mat)
{
	struct nod *p1 = *L;
	struct nod *p2 = mat;
	while (p1!=NULL || p2!=NULL)
	{
		if (p1==NULL)
		{
			adaugare_element(L,p2,0,0);
			p2 = p2->next;
		} else if (p2==NULL)
		{
			return;
		} else
		{
			if (p1->i < p2->i)
			{
				p1 = p1->next;
			}
			else if (p2->i < p1->i)
			{
				adaugare_element(L,p2,0,0);
				p2 = p2->next;
			}
			else {
				if (p1->j < p2->j)
				{
					p1 = p1->next;
				}
				else if (p2->j < p1->j)
				{
					adaugare_element(L,p2,0,0);
					p2 = p2->next;
				}
				else
				{
					p1->val += p2->val;
					p1 = p1->next;
					p2 = p2->next;
				}
			}
		}
	}
}
void afisare_matrice(struct matrice m1)
{
	puts("Afisare elemente nenule matrice:");
	struct nod *p = m1.mat;
	int last_i = 0;
	while (p!=NULL)
	{
		if (p->i != last_i)
		{
			puts("");
			last_i = p->i;
		}
		printf("a[%d][%d]=%d ", p->i, p->j, p->val);
		p = p->next;
	}
	puts("\n");
}
void sortare_matrice(struct matrice m1) //ca se ne asiguram ca avem toate elementele in ordine
{
	struct nod *p1, *p2;
	p1=m1.mat;
	while (p1->next!=NULL)
	{
		p2 = p1->next;
		while (p2!=NULL)
		{
			if (p1->i > p2->i)
			{
				struct nod tmp = *p1;
				*p1 = *p2;
				*p2 = tmp;
				p2->next = p1->next;
				p1->next = tmp.next;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
	p1=m1.mat;
	while (p1->next!=NULL)
	{
		p2 = p1->next;
		while (p2!=NULL)
		{
			if (p1->j > p2->j && p1->i == p2->i)
			{
				struct nod tmp = *p1;
				*p1 = *p2;
				*p2 = tmp;
				p2->next = p1->next;
				p1->next = tmp.next;
			}
			p2=p2->next;
		}
		p1=p1->next;
	}
}
int main()
{
	struct matrice *matrice1;
	struct matrice *matrice2;
	citire_matrice(&matrice1);
	citire_matrice(&matrice2);

	sortare_matrice(*matrice1);
	sortare_matrice(*matrice2);

	struct matrice *rez1=NULL;
	struct matrice *rez2=NULL;

	afisare_matrice(*matrice1);
	afisare_matrice(*matrice2);

	rez1 = adunare(*matrice1,*matrice2);
	if (rez1!=NULL)
	{
		puts("Afisare rezultat adunare:");
		sortare_matrice(*rez1);
		afisare_matrice(*rez1);
	}
	rez2 = inmultire(*matrice1,*matrice2);
	if (rez2!=NULL)
	{
		puts("Afisare rezultat inmultire:");
		sortare_matrice(*rez2);
		afisare_matrice(*rez2);
	}

	return 0;
}
