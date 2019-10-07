#include <stdio.h>
#include <stdlib.h>
struct nod {
int val;
struct nod *urm;
};
struct nod *prim, *ultim;
void adaugaNod(int x) {
struct nod *noulNod = (struct nod*)malloc(sizeof(struct
nod));
noulNod->val = x;
noulNod->urm = NULL;
if (prim == NULL) {
prim = noulNod;
ultim = noulNod;
}
else {
ultim->urm = noulNod;
ultim = noulNod;
}
}
void sterge() {
struct nod* p = prim;
prim = prim->urm;
if (prim == NULL) ultim = NULL;
free(p);
}
void afisare(FILE* out) {
struct nod *p = prim;
while (p != NULL) {
fprintf(out, "%d ", p->val);
p = p->urm;
}
}
int main() {
FILE *f, *g;
f = fopen("lista.in.txt", "r");
g = fopen("lista.out.txt", "w");
prim = ultim = NULL; // SAU prim = ultim = 0;
int k, i, x;

return 0;
}
