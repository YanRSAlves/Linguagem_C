#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    float x, y;
    int dc;



    printf("\t\t\t\t####===========Descubra o X ou Y da fun��o!==========####\n\n");
    printf("\t\t\t\t####A fun��o que estamos trabalhando � f(x,y)=3x+4y�!####\n\n");

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
            printf("\n\nN�O ENCONTRADA ESTA OP��O!\n\n");

        }

    }








    return 0;
}
