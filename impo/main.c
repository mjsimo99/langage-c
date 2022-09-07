#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age ; //variable
    char sexe ;//variable
    printf("Saisissez le sexe de la personne homme=H famme=F \n:");//message afficher
    scanf("%c", &sexe);//sexe de personne
    printf("Saisissez l'age de la personne :");//message afficher
    scanf("%d", &age);//age de personne
    if(sexe == 'H' && age>=18 || sexe == 'F' && age >=20)//if avec condition logic
        printf("la personne est acceptable");//message affiche
    else if(sexe == 'H' && age <18 || sexe == 'F' && age <20 )//si tu n'étais pas if :
        printf("La personne n'est pas acceptee :");//message affiche
    else //si tu n'étais pas if or else if :
        printf("Veuillez verifier votre identite"); //message affiche
    return 0;
}
