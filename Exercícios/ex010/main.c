#include <stdio.h>
#include <stdlib.h>


int main(){

            int n, i, resultado = 0;

            printf("TESTE DE NUMEROS PRIMOS OU NAO!\n\n");

            printf("Digite o numero: ");
            scanf("%d", &n);

             for (i = 2; i <= n / 2; i++) {
                if (n % i == 0) {
                   resultado++;
                   break;
                }
             }

             if (resultado == 0)
                printf("%d e um numero primo!\n", n);
             else
                printf("%d nao e um numero primo!\n", n);

        return 0;
}
