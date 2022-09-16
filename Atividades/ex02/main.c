#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, f, y;

    printf("====Descubra a funcao!====\n");

    printf("\nDigite o X da funcao: ");
    scanf("%f", &x);

    printf("\nDigite o y da funcao: ");
    scanf("%f", &y);

    printf("\n\nEXECUTANDO TODAS POSSIBILIDADES...\n");
    system("pause");


    f = 3*x+4*y*y;

    printf("%.2f",f);



    return 0;
}
