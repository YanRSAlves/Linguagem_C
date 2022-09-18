#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    char escolha, nome[20];
    float salarioantigo, salariofinal;

    printf("\t\t\t\tREAJUSTE SALÁRIAL DA EMPRESA FULANO \n\n\n");

    printf("Informe seu nome? ");
    gets(nome);

    printf("\nQual era seu antigo salário? ");
    scanf("%f",&salarioantigo);


    printf ("\n\n\nMenu das categorias dos trabaladores: \n\n\n");
    printf ("A, C, F, e H, ------------Digite 1\n");
    printf ("B, D, E, I, J e T ,------ Digite 2\n");
    printf ("K e R, -------------------Digite 3\n");
    printf ("L, M, N, O, P, Q e S, ----Digite 4\n");
    printf ("U, V, X, Y, W e Z, -------Digite 5\n");
    printf ("\n\nDigite sua categoria: ");
    scanf ("%s", &escolha);

    switch (escolha) {
        case '1' :
            salariofinal = salarioantigo+salarioantigo*10/100;
            printf("O novo valor do seu salário é %.2f.\n", salariofinal);
            printf("Parabéns pela graticação!\n");
            break;
        case '2' :
            salariofinal = salarioantigo+salarioantigo*15/100;
            printf("O novo valor do seu salário é %.2f.\n", salariofinal);
            printf("Parabéns pela graticação!\n");
            break;
        case '3' :
             salariofinal = salarioantigo+salarioantigo*25/100;
            printf("O novo valor do seu salário é %.2f.\n", salariofinal);
            printf("Parabéns pela graticação!\n");
            break;
        case '4' :
             salariofinal = salarioantigo+salarioantigo*35/100;
            printf("O novo valor do seu salário é %.2f.\n", salariofinal);
            printf("Parabéns pela graticação!\n");
            break;
        case '5' :
             salariofinal = salarioantigo+salarioantigo*50/100;
            printf("O novo valor do seu salário é %.2f.\n", salariofinal);
            printf("Parabéns pela graticação!\n");
            break;
        default :
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}
