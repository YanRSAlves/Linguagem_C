#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b, h;
    int p;

    printf("====CALCULO DA AREA E PERIMETRO DE UM RETANGULO!!====\n\n\n");



    printf("Digite a base: ");
    scanf("%f", &b);

    printf("Digite a altura: ");
    scanf("%f", &h);

    a = b*h;

    printf("\n\nArea deste retangulo e %.1f!\n", a);

    p = 2*b+2*h;

    printf("e o perimetro sera %d!\n\n\n", p);





    return 0;
}
