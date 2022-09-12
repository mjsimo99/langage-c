    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    int main()
    {
    int rep  ;
do{
        do{
        printf("Si vous voulez lancer la calculatrice , appuyez sur 1 : ");
        scanf("%d",&rep);
        }while(rep!=1 );


        float A , B , c , s , t;

        char operation ;

        int continu ;


        printf("donnez la premier nombre : ");
        scanf("%f" ,&A);
        printf("donnez la deuxieme nombre : ");
        scanf("%f" ,&B);
        printf("donnez l'opperateur : ");
        scanf(" %c" ,&operation);
        c = cos(A);
        s = sin(A);
        t = tan(A);
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
        case '^' :
            printf("la puissence est %.2f \n",pow(A,B));
        break;
        case '^^' :
            printf("la puissence est %.2f \n",pow(A,2));
        break;
        case '^^^' :
            printf("la puissence est %.2f \n",pow(A,3));
        break;
        case  '\\' :
            printf("cose A est %.2f",cos(A));
        break;
        case  '^^^^' :
            printf("sin A est %.2f",sin(A));
        break;
        case  '^^^^^' :
            printf("tan A est %.2f",tan(A));
        break;
        default:
            printf("Choisissez une seule de ces valeurs : + - * / \n");

        }

        printf("voulez-vous continuer ? Si oui, choisissez un nombre different 0 : \n");

        scanf("%d",&rep);
        }while(rep!=0);


        return 0;
    }
