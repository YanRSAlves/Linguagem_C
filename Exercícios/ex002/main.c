#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
      float a, b, c, delta, x1, x2;

      printf("##########################################\n");
      printf("DADOS DE UMA EQUCAO DO SEGUNDO GRAU \n\n");
      printf("EXEMPLO:\n");
      printf("\t\t5x2-3x-2: ");
      printf("A = 5, B = -3, C = -2\n\n");
      printf("DIGITE OS DADOS DA SUA EQUACAO DO SEGUNDO GRAU!\n\n");

      printf("Digite o valor de a: ");
      scanf("%f", &a);
      printf("Digite o valor de b: ");
      scanf("%f", &b);
      printf("Digite o valor de c: ");
      scanf("%f", &c);

      if (a != 0) {
            delta = (b*b) - 4*a*c;
            if (delta == 0) {
                    x1 = (-b + sqrt(delta)) / (2*a);
                    printf("\nDelta igual a 0, entao possui uma raiz real.\n");
                    printf("x1 e x2 = %.2f", x1);
            } else {
                    if (delta > 0) {
                            x1 = (-b + sqrt(delta)) / (2*a);
                            x2 = (-b - sqrt(delta)) / (2*a);
                            printf("\nDelta maior que 0, entao possui duas raizes reais. \n");
                            printf("x1 = %.2f \n", x1);
                            printf("x2 = %.2f \n", x2);
                  } else {
                        printf("\nDelta menor que 0\n");
                        printf("Nao existe raiz Real !\n");
                  }
                  }
            } else {
                    printf("\nNao eh uma equacao do segundo grau ");
                    printf("a tem que ser diferente de 0!\n");
                }






    // ax2 + bx + c = 0
    // delta = b2 - 4*a*c
    // x1 e x2 = -b +- sqrt(delta) / 2*a

    // delta = 0, temos uma raiz real.
    // delta > 0, temos duas raizes reais.
    // delta < 0, nao temos raizes reais.






    return 0;
}
