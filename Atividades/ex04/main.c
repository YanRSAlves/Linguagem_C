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
   printf("\nNova solicita��o da empresa!");
   printf("\n\n\ninforme as informa��es ver�dicas para nova retifica��o!...\n\n\n");

   printf("Qual � o seu nome? ");
   scanf("%s",&nome);

   printf("Qual � sua idade? ");
   scanf("%d",&idade);

   printf("Qual � o seu cargo? ");
   scanf("%s",&cargo);

   printf("Qual � o seu Sal�rio? ");
   scanf("%f",&salario_bruto);


   reajuste = salario_bruto*15/100;
   gratificacao = salario_bruto*10/100;
   salario_final = salario_bruto+reajuste+gratificacao; //salario bruto total

   descontado = salario_final*8/100;
   salario_liquido = salario_final-descontado;



   printf("\n\nOl� Sr. %s %d anos, atua na profiss�o de %s, informaremos as modifica��es do seu sal�rio! ",nome,idade,cargo);
   printf("\nSal�rio Bruto �: %.2f.",salario_final);
   printf("\nSal�rio L�quido �: %.2f.\n\n",salario_liquido);

















    return 0;
}
