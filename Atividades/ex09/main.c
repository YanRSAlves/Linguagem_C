#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[20];
    float salario_antigo, reajuste, reajuste2, reajuste3, salariofinal;
    int dependentes;


    printf("Toda empresa foi escolhida para o novo reajuste salarial!\n");
    printf("Completa seus dados:\n");
    printf("Qual seu nome? \n");
    gets(nome);
    printf("Qual o valor do salário que você recebia? \n");
    scanf("%f",&salario_antigo);
    printf("Digite o total de dependentes: \n");
    scanf("%d",&dependentes);

    reajuste = salario_antigo*25.5/100; //menor que 2k
    reajuste2 = salario_antigo*15/100;
    reajuste3 = salario_antigo*7.5/100;

    if (salario_antigo <= 2000 && dependentes >= 2) {
        salariofinal = salario_antigo+reajuste;
        printf("Houve reajuste no sálario agora ficará no valor de %.2f.\n\n",salariofinal);
    }else {
        if(salario_antigo > 2000 && dependentes == 1) {
            salariofinal = salario_antigo+reajuste2;
            printf("Houve reajuste2 no sálario agora ficará no valor de %.2f.\n\n",salariofinal);
        }else {
            salariofinal = salario_antigo+reajuste3;
            printf("Houve reajuste3 no sálario agora ficará no valor de %.2f.\n\n",salariofinal);
        }
    }

    return 0;
}
