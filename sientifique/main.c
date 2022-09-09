   #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    int main()
    {
        goto PRINTTHIS;
    int rep ,repe ;

        do{
        printf("Si vous voulez une calculatrice sientifique , appuyez sur 2  ");
        scanf("%d",&rep);
        }while(rep!=2 );


        float A , B ;

        char operation ;

        int continu ;
        do{

        printf("donnez la premier nombre : ");
        scanf("%f" ,&A);
        printf("donnez la deuxieme nombre : ");
        scanf("%f" ,&B);
        printf("donnez l'opperateur : ");
        scanf(" %c" ,&operation);

        switch(operation){
        case '+' :
            printf("la somme est %.2f \n",A+B);
        break;
        case '-' :
            printf("La soustraction est %.2f \n",A-B);
        break;
        case '*' :
            printf("La multiplication est %.2f \n",A*B);
        break;
        case '/' :
            printf("La division est %f \n",A/B);
        break;
        default:
            printf("Choisissez une seule de ces valeurs : + - * / \n");

        }
        PRINTTHIS:
        printf("voulez-vous continuer ? Si oui, choisissez un nombre different 0 : ");
        scanf("%d",&continu);
        }while(continu!=0);


        return 0;
    }
