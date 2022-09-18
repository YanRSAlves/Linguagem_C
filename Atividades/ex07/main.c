#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int idade;
    char nome[20];


    printf("\t\t\t\tCompetição de Natação Escolar");
    printf("\n\n\nOlá Candidato informe alguns dados sobre você: \n");

    printf("\n\nQual seu primeiro nome? ");
    gets(nome);

    printf("\nQual sua idade %s? ",nome);
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("\nCadastro feito na categoria infantil A. \nBoa sorte!\n\n");
    }else {
        if (idade >= 8 && idade <= 10) {
            printf("\nCadastro feito na categoria infantil B. \nBoa sorte!\n\n");
        }else {
            if (idade >= 11 && idade <= 13) {
                printf("\nCadastro feito na categoria juvenil A. \nBoa sorte!\n\n");
            }else {
                if (idade >=14 && idade <= 17) {
                    printf("\nCadastro feito na categoria juvenil B. \nBoa sorte!\n\n");
                }else {
                    printf("\nNao há vagas pra sua idade tente no próximo concurso!\n\n\n");
                }
            }
        }
    }

    return 0;
}
