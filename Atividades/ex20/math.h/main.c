#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    float cima,baixo,prox,num;

        printf("Informe o valor para aredondar: ");
        scanf("%f", &num);

        cima=floor(num);
        printf("o arredondamento para baixo de %f é %f\n",num,cima);

        baixo=ceil(num);
        printf("o arredondamento para cima de %f é %f\n",num,baixo);

        prox=round(num);
        printf("o arredondamento mais proximo de %f é %f\n",num,prox);


    return 0;
}
