#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");



    char nome[20];
    int dependentes, horas_de_trabalho;
    float salario, salariofinal, inss, ir, salario_liquido;

    printf("\t\t\tExtrato salarial do m�s\n");

    printf("\nQual o seu nome? ");
    gets(nome);

    printf("\nQuantas horas de trabalho voc� fez %s? ",nome);
    scanf("%d",&horas_de_trabalho);

    printf("\nQuantos dependentes voc� tem? ");
    scanf("%d",&dependentes);


    salario = horas_de_trabalho*25;
    dependentes = dependentes*40;
    inss = salario*6.5/100;
    ir = salario*10/100;
    salariofinal = salario+dependentes;
    salario_liquido = salariofinal-inss-ir;


    printf("\n\nSr. %s o seu Salario Bruto � %.2f.", nome,salariofinal);
    printf("\nCom os impostos do INSS e IR ja retirados voc� \nreceberar o sal�rio l�quido no valor de %.2f.\n\n", salario_liquido);



    return 0;
}




