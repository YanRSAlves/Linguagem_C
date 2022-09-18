#include <stdio.h>
#include <stdlib.h>


int main()
{
    char escolha;


    printf ("Menu:\n");
    printf ("A - Cadastro\n");
    printf ("I - Imprimir\n");
    printf ("S - Sair\n\n");
    printf ("Digite sua opcao: ");
    scanf ("%c", &escolha);

    switch (escolha) {
        case 'A' :
            printf("Cadastrando...\n");
            break;
        case 'I' :
            printf("Imprimindo...\n");
            break;
        case 'S' :
            printf("Saindo...\n");
            break;
        default :
            printf("Opcao invalida\n");
            break;
    }



    return 0;
}
