#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float x, y, yfinal, xfinal;
    char alternativa;



    printf("\t\t\t\t####===========Descubra o X ou Y da função!==========####\n\n");
    printf("\t\t\t\t####A função que estamos trabalhando é f(x,y)=3x+4y²!####\n\n");

    alternativa = 's' || 'n';


    printf("\nDigite o valor de X para descobrir o valor de Y, ou vice-versa!");
    printf("\nVocê sabe o valor de X?\ndigite s ou n: ");
    scanf("%s", &alternativa);




    if (alternativa == 's'){
         printf("\nDigite o X da funcao: ");
         scanf("%f", &x);

         y = ((-3*x)/4)*-1;
         yfinal = sqrt(y);

         printf("\nCom o valor de X sendo %.1f então o valor de Y é: %.3f\n\n",x , yfinal);


    }else{
        if(alternativa == 'n'){
            printf("\nDigite o Y da funcao: ");
            scanf("%f", &y);

            x = (-4*y*y/3)*-1;
            xfinal = x;

            printf("\nCom o valor de Y sendo %.1f então o valor de X é: %.3f\n\n",y , xfinal);

        }else{
            printf("\n\nNÃO ENCONTRADA ESTA OPÇÃO!\n\n");

        }

    }








    return 0;
}
