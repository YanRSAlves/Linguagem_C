#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a ;

    printf("Digite um numero: \n");
    scanf("%d", &a);

    if (a > 10) {
        printf("O numero %d e maior que 10!\n",a);
    } else {
    printf("O numero %d e menor que 10!\n",a);
    }


    return 0;
}
