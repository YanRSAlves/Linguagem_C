#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a;

    printf("Digite um numero: \n");
    scanf("%d",&a);
    if (a > 10){
        if (a < 20) {
            if((a % 2) == 0){
                printf("O numero %d e maior que 10, e par!\n", a);
            }else {
                printf("O numero %d e maior que 10, mas nao e par!\n",a);
            }
        }else {
            printf("O numero %d e maior que 10, e maior que 20!!\n",a);
        }
    }


    return 0;
}
