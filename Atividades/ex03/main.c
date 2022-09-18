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

    if (c <= 20){
        printf("TEMPO FRIO\n\n\n");
    }else if (c >= 30){
            printf("TEMPO QUENTE\n\n");
        }else {
            printf("TEMPO BOM PARA IR A PRAIA\n\n");

        }







    return 0;
}
