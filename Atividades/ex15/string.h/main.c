#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    char aluno1[25]="Ciencia";

    strcat (aluno1, " da Computacao");

    printf("Nome2 = %s\n", aluno1);
    return 0;
}
