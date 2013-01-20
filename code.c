#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	int limita, i, j;
	int *souctyDelitelu;

	/* nacteni horni meze, kam spocitat sprat. cisla */
	printf("Zadejte limit:\n");
	if (scanf("%d", &limita) != 1 || limita < 1) {
		printf("Nespravny vstup.\n");
		return (EXIT_FAILURE);
	}

	/* alokovani pameti pro celou cast s limitem */
	souctyDelitelu = (int*) malloc(limita * sizeof(int));


	/* spocitani souctu celociselnych delitelu - na zaklade eratestonova sita */
	/* a ulozeno: pole[0] = pro hodnotu 1, tedy pole[n] je soucet pro hodnotu n+1 */
	/* nejprve se musi nastavit defaultni hodnoty, aby bylo k cemu pricitat */
	for (i = 0; i < limita; i++) {
		souctyDelitelu[i] = 1;
	}
	/* a ted na zaklade eratestonova sita se budou nacitat delitele (tedy se zpetne udela rozklad na vsechny mozne delitele) */
	for (j = 2; j <= (limita / 2); j++) {
		for (i = 2; i*j <= limita; i++) {
			souctyDelitelu[i * j - 1] += j;
		}
	}


	/* projeti pole a nalezeni sprat. cisel podle sumy a jejich indexu */
	/* index + 1 = originalni cislo */
	for (i = 1; i < limita; i++) {
		if (souctyDelitelu[i - 1]-1 > limita || souctyDelitelu[i - 1] < i || souctyDelitelu[i - 1] == i) 
			continue;

		if (souctyDelitelu[souctyDelitelu[i - 1]-1] == i) 
			printf("%d, %d\n", i, souctyDelitelu[i - 1]);
	}


	return (EXIT_SUCCESS);
}
