#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");



    float nota1, nota2, nota3, nota4;
    float media, EX, nfim;

    printf("\t\t\tCALCULO DE MEDIA PONDERADA\n\n\n");



    printf("Digite  quatro notas, cada uma  de 0 a 10: ");
    scanf("%f%f%f%f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 * 2 + nota2 * 3 + nota3 * 4 + nota4 * 1) / 10;
    printf("Media ponderada: %.2f\n", media);


    if (media >= 7) {
        printf("Média maior ou igual a 7\nAluno foi aprovado\n");
        return 0;

    }else if (media < 5) {
            printf("Média menor que 5\nAluno foi reprovado");
            return 0;
        }else if (media >=5 && media < 7) {
                printf("Você chegou perto de ser aprovado, qual foi sua nota do exame? ");
                scanf("%f",&EX);

            }


    nfim = (media+EX)/2;

    if (nfim >= 7){
        printf("Nova média maior ou igual a 7\nAluno aprovado\n");
    }else if (nfim < 7){
            printf("Mesmo com a nota do exame você não atingiu a média\nAluno reprovado\n");
        }





    return 0;
}
