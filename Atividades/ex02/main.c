#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float x, y;
    int dc;



    printf("\t\t\t\t####===========Descubra o X ou Y da função!==========####\n\n");
    printf("\t\t\t\t####A função que estamos trabalhando é f(x,y)=3x+4y²!####\n\n");

    system("pause");

    printf("\nVoce sabe o valor de x digite 1 para sim ou 2 para n: ");
    scanf("%d",&dc);



    if (dc == 1){
            printf("SIMMMMMMMM");
         //printf("\nDigite o X da funcao: ");
         //scanf("%f", &x);
    }else{
        if(dc == 2){
            printf("NAOOOOOOO");
            //printf("\nDigite o y da funcao: ");
            //scanf("%f", &y);
        }else{
            printf("\n\nNÃO ENCONTRADA ESTA OPÇÃO!\n\n");

        }

    }








    return 0;
}
