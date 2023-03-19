#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    char nome[35];
    int tamanho;

    printf("Digite seu nome: ");
    scanf("%s",&nome);
        tamanho = strlen(nome);
        printf("o tamanho da string ""\"%s""\" é %d. \n", nome,tamanho);

    return 0;
}
