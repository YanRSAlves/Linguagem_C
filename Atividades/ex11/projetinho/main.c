#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int opcao_escolhida;

    printf("\t\t\t Parabéns Você foi o ganhador! \n \t\t\tEscolha um Premio!\n\n");

    printf("(1) UMA FERRARI! \n");
    printf("(2) UM AVIÂO! \n");
    printf("(3) UM HELICOPTERO! \n");
    printf("(4) UMA MANSÃO! \n");
    printf("(5) UM IATE! \n");
    printf("(6) UMA VIAGEM POR 30 DIAS! \n");
    scanf("%d",&opcao_escolhida);

    if (opcao_escolhida >= 1 && opcao_escolhida <= 6){
        printf("Muito bem! Seu Prêmio será enviado em breve!\n");
    }else if (opcao_escolhida > 6){
        printf("Esta opção ainda não exite pode tentar novamente amanhã!\n");
    }else {
        printf("Não identifiquei está opção, por favor tente novamente na proxima notificação!\n");
    }


    return 0;
}
