#include <stdio.h>
#include <stdlib.h>

int main()
{
       int a;
    printf("Digite um numero:\n");
    scanf("%d",&a);

        if (a == 0) {
        printf("\nVOCE DIGITOU O NUMERO 0, PODE SER CONSIDERADO NEUTRO OU PAR\n");
        return 0;
        }
        if ((a % 2) == 0){
        printf("%d e PAR!\n",a);
            }else{
            printf("%d e IMPAR!\n",a);
        }



    return 0;
}
