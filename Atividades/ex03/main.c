#include <stdio.h>
#include <stdlib.h>

int main()
{

    float c, f;



    printf("\t\tConverta Fahrenheit para Celsius \n\n");
    printf("Digite os graus em Fahrenheit que deseja converter: ");
    scanf("%f",&f);

    c = 5*(f-32)/9;

    printf("\nEm Fahrenheit %.0f sera %.2f graus Celsius.\n",f,c);
    printf("Portanto...\n");

    if (c <= 25){
        printf("TEMPO FRIO\n");
    }else {
        if (c >= 50){
            printf("TEMPO QUENTE\n");
        }else {
            printf("TEMPO BOM PARA IR A PRAIA\n");

        }

    }





    return 0;
}
