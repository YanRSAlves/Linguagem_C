#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, fat=1;

    printf("RESOLUCAO DE FATORIAL\n\n");

    printf("Informe o numero: ");
    scanf("%d",&n);

    for (i = n; i> 1; i--) {
        fat = fat*i;
    }

    printf("\nO fatorial do numero %d e = %d", n, fat);


    return 0;
}
