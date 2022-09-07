#include <stdio.h>
#include <stdlib.h>

int main()
{
       int a;
    printf("Digite um numero:\n");
    scanf("%d",&a);

        if (a == 0) {
        printf("\n%d e numero neutro ou pode se considerar ",a);
        }
        if ((a % 2) == 0){
        printf("%d e PAR!\n",a);
            }else{
            printf("%d e IMPAR!\n",a);
        }



    return 0;
}
