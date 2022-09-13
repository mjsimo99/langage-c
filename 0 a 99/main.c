#include <stdio.h>  // Inclure la bibliothèque STanDard Input Output
                    // permet d'utiliser, entre autre, printf et scanf
int main() {
    const int TAB_SIZE = 100;
    const int LINE_SIZE = 10;
    int tab[TAB_SIZE];

    // Remplir le tableau avec les nombres de 0 à TAB_SIZE
    for(int i = 0 ; i < TAB_SIZE ; i++) tab[i] = i;

    // Aficher le tableau en limitant à LINE_SIZE valeurs par lignes
    for(int i = 0 ; i < TAB_SIZE ; i++) {
        if((i+1) % LINE_SIZE == 0) { // Si arrivé en fin de ligne
            printf("%2d\n", tab[i]); //    Ajout d'un saut de ligne
        }
        else {                      // Sinon
            printf("%2d,", tab[i]); //    Ajout d'une virgule
        }
    }

	return 0;
}
