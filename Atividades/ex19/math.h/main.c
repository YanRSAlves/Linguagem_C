#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    float x, y,pot1,pot,s;

    printf("Informe o valor da base: ");
    scanf("%f",&x);

    printf("Informe o valor da potencia: ");
    scanf("%f",&y);

    pot = pow(2,5);
    pot1 = pow(x,y);
    s = pot +pot1;

        printf("o resultado de 2 elevado a quinta potencia é : %.1f\n",pot);
        printf("o resultado de %.1f elevado a %.1f é: %.1f\n",x,y,pot1);
        printf("a soma das potencia é: %.0f",s);


    return 0;
}
