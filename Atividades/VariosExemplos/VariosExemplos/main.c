#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>
#define PI 3.14

int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    float x, y, raizQ, resC, raizQB, raizResC, potb, ProdutoA;
    float seno,cosseno,tangente;

        printf("Informe o primeiro numero: \n");
        scanf("%f",&x);
        printf("Informe o segundo numero: \n");
        scanf("%f",&y);

        printf("\n\nLetra A \n\n");
        potb = pow(x,2); //letra b
        raizQ = sqrt(y);
        ProdutoA = potb*raizQ;
        printf("o resultado é: %.1f",ProdutoA);

        printf("\n\nLetra B\n\n");
        printf("o resultado é: %.1f",potb);

        printf("\n\nLetra C\n\n");
        raizQB = sqrt(x);
        raizQ = sqrt(y);
        resC = raizQ+raizQB;
        raizResC = sqrt(resC);
        printf("o resultado é: %.1f",raizResC);

        printf("\n\nLetra D\n\n");
        seno= sin(30*PI/180);
        cosseno = cos(40*PI/180);
        tangente = tan(60*PI/180);

        printf("O seno de 30 graus é: %.1f \nO cosseno de 40 graus é: %.1f \nA tangente de 60 graus é: %.1f \n",seno, cosseno, tangente);

    return 0;
}
