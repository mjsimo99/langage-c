#include <stdio.h>

int main() {
   int i, nbr, somme;
   int tab[30];

   printf(" Entrez le nombre d'�l�ments dans le tableau: ");
   scanf("%d", &nbr);

   printf(" Entrez les �l�ments du tableau: ");
   for (i = 0; i < nbr; i++)
      scanf("%d", &tab[i]);

   somme = 0;
   for (i = 0; i < nbr; i++)
      somme = somme + tab[i];

   printf(" La somme = %d", somme);

   return (0);
}
