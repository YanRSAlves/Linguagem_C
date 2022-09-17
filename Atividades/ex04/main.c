#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int idade;
    float salario_liquido, salario_bruto, salario_final;
    float reajuste, gratificacao, descontado;

    char nome[30], cargo[30];

   printf("==================ATUALIZACAO DE FORMULARIO=================");
   printf("\nNova solicitação da empresa!");
   printf("\n\n\ninforme as informações verídicas para nova retificação!...\n\n\n");

   printf("Qual é o seu nome? ");
   scanf("%s",&nome);

   printf("Qual é sua idade? ");
   scanf("%d",&idade);

   printf("Qual é o seu cargo? ");
   scanf("%s",&cargo);

   printf("Qual é o seu Salário? ");
   scanf("%f",&salario_bruto);


   reajuste = salario_bruto*15/100;
   gratificacao = salario_bruto*10/100;
   salario_final = salario_bruto+reajuste+gratificacao; //salario bruto total

   descontado = salario_final*8/100;
   salario_liquido = salario_final-descontado;



   printf("\n\nOlá Sr. %s %d anos, atua na profissão de %s, informaremos as modificações do seu salário! ",nome,idade,cargo);
   printf("\nSalário Bruto é: %.2f.",salario_final);
   printf("\nSalário Líquido é: %.2f.\n\n",salario_liquido);

















    return 0;
}
