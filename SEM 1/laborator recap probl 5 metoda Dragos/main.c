#include <stdio.h>
#include <ctype.h>

int main(int argc, char **argv)
{
	if (argc!=2)
	{
		printf("Mod de folosire: %s nume_fisier.in\n", argv[0]);
		return -1;
	}
	printf("Deschidem fisierul %s\n", argv[1]);
	FILE *f = fopen(argv[1],"r");
	if (f==NULL)
	{
		puts("Eroare deschidere fisier!");
		return -1;
	}
	int vector_aparitii[26] = {0};
	while (1)
	{
		unsigned char c = fgetc(f);
		if (feof(f))
		{
			break;
		}
		c = toupper(c);
		if (c>='A' && c<='Z')
		{
			vector_aparitii[c - 'A']++;
		}
	}
	int maxim = 0;
	for (int i=0;i<26;i++)
	{
		if (vector_aparitii[i]>maxim)
		{
			maxim = vector_aparitii[i];
		}
	}

	if (maxim==0)
	{
		puts("Nu exista litere in fisierul dat");
	}
	else
	{
		puts("Numar aparitii cele mai comune litere:");
		for (int i=0;i<26;i++)
		{
			if (maxim==vector_aparitii[i])
			{
				printf("Litera %c are %d aparitii\n", 'A'+i,maxim);
			}
		}
	}


	return 0;
}
