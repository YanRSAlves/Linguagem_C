#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");


    int opcao_escolhida;

    printf("\t\t\t Parab�ns Voc� foi o ganhador! \n \t\t\tEscolha um Premio!\n\n");

    printf("(1) UMA FERRARI! \n");
    printf("(2) UM AVI�O! \n");
    printf("(3) UM HELICOPTERO! \n");
    printf("(4) UMA MANS�O! \n");
    printf("(5) UM IATE! \n");
    printf("(6) UMA VIAGEM POR 30 DIAS! \n");
    scanf("%d",&opcao_escolhida);

    if (opcao_escolhida >= 1 && opcao_escolhida <= 6){
        printf("Muito bem! Seu Pr�mio ser� enviado em breve!\n");
    }else if (opcao_escolhida > 6){
        printf("Esta op��o ainda n�o exite pode tentar novamente amanh�!\n");
    }else {
        printf("N�o identifiquei est� op��o, por favor tente novamente na proxima notifica��o!\n");
    }


    return 0;
}
