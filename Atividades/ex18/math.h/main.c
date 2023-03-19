#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    float x, res1, res2, res3;

    printf("Informe o valor para calcular a raiz: ");
    scanf("%f",&x);
        res1 = sqrt(x);
        res2 = cbrt(x);
        res3 = pow(x,1.0/4.0);

    printf("A raiz quadrada de %.1f é: %.1f\n",x, res1);
    printf("A raiz cúbica de %.1f é: %.1f\n",x,res2);
    printf("A raiz quarta %.1f é: %.1f\n",x,res3);

    return 0;
}
