#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char nome[20], nomec[20];
    float valor, fabrica, revendedor, valortotal;

    printf("Lucros no pre�o dos autom�veis de f�brica\n");

    printf("Qual seu nome? \n");
    gets(nome);
    printf("Ok, qual nome do ve�culo? ");
    gets(nomec);

    printf("Ol� revendedor %s qual valor inicial deste carro? ", nome);
    scanf("%f",&valor);

    fabrica = valor*45/100;
    revendedor = valor*28/100;
    valortotal = valor+fabrica+revendedor;

    printf("\nO autom�vel %s ficar� no valor final de %.2f!\n",nomec,valortotal);

    return 0;
}
