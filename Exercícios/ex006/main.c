#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;




    printf("\tDESCUBRA A CARACTERISTICA DE UM TRIANGULO\n\n");
    printf("EQUILATERO = 3 lados iguais \n");
    printf("ISOCELES = 2 lados iguais \n");
    printf("ESCALENO = 3 lados diferentes\n\n");

    printf("Qual primeiro lado do triangulo? \n");
    scanf("%d",&x);
    printf("Qual segundo lado do triangulo? \n");
    scanf("%d",&y);
    printf("Qual terceiro lado do triangulo? \n\n");
    scanf("%d",&z);

    if  (x + y > z && x + z > y && y + z > y) {
        printf("Os tres lados formam um triangulo.\n");
        if (x == y && x == z)
            printf("Este e um Triangulo Equilatero\n");
        else
            if (x == y || x == z || y == z)
                printf("Este e um Triangulo Isoceles\n");
            else
                printf("Este e um Triangulo Escaleno\n");
    }
    else
        printf("Os lados nao formam um triangulo!\n");








    return 0;
}
