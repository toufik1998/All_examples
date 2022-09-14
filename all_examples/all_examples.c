#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*

        // Syntax malloc
        // malloc() ==>> malloc (number *sizeof(int));

        // Example simple variable
        int * p;
        p = malloc(4 * sizeof(int));
        *p = 12;
        printf("%d \n", *p);
    */
    /*
        // Example pour les tableau
        int * p = malloc(4 * sizeof(int));
        *(p + 0) = 1;
        *(p + 1) = 4;
        *(p + 2) = 7;
        printf("%d \n", *(p + 0));
        printf("%d \n", *(p + 1));
        printf("%d \n", *(p + 2));

    */

    /*
        // Syntax free
        // free() ==>> free (pointer_name);
        //  example free() avec malloc()
        char *p1, *p2, *p3;
        p1 = malloc(100);
        printf("%p \n",p1);
        p2 = malloc(50);
        printf("%p \n",p2);
        free(p1);
        p3 = malloc(40);
        printf("%p \n",p1);
    */


    /*
        // Syntax Calloc Fonction
        // calloc() ==>> calloc (number, sizeof(int));

        // Example
        int * p1 = malloc(4 * sizeof(int)); //====>> garbague value
        int * p2 = calloc(4, sizeof(int)); //=====>> initialisation a 0
        printf("%d \n", *(p1 + 0)); // 23494857
        printf("%d \n", *(p1 + 1)); // 98067542
        printf("%d \n", *(p1 + 2)); // 23498655
        printf("%d \n", *(p2 + 0)); // 0
        printf("%d \n", *(p2 + 1)); // 0
        printf("%d \n", *(p2 + 2)); // 0

    */

    /*
        // - Syntax Realloc Fonction
        // realloc() ==>> realloc (pointer_name, number * sizeof(int));

        // Example
        int * p = malloc(4 * sizeof(int));
        printf("%d", *p);

        p = realloc(p, 6 * sizeof(int));
        printf("%d", *p);

    */

    /*

        // Pratique
        int i, number;
        float somme, moyenne;
        printf("Please enter a number \n");
        scanf("%d", &number);
        float *p = calloc(number, sizeof(float));
        if(p == NULL){
            printf("la memoire n'est pas alloue \n");
            exit(0);
        }else{
            for(i = 0; i < number; i++){
                printf("Please enter your notes P[%d] \n", i + 1);
                scanf("%f", (p+i));
                }

            somme = 0;

            for(i = 0; i < number; i++){
                somme = somme + *(p+i);
                }

            moyenne = somme / number;
            printf("La somme des notes %.2f \n", somme);
            printf("La moyenne des notes %.2f \n", moyenne);

            free(p);
        }

        */

    return 0;
}
