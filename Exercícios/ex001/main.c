#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;


    printf("Digite um numero: \n");
    scanf("%d",&n);

    if (n == 0) {
        printf("VOCE DIGITOU O NUMERO 0! \nCHAMADO NEUTRO OU TAMBEM CONSIDERA-SE PAR!\n");
                }
                if (n > 0) {
                    printf("NUMERO POSITIVO! \n");
                } if (n < 0) {
                printf("NUMERO NEGATIVO!\n");
                }


    return 0;
    }
