#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    char aluno1[35]="Ciencia da Computação";
    int tamanho;

        tamanho = strlen(aluno1);

        printf("o tamanho da string * %s * é %d. \n", aluno1, tamanho);

    return 0;
}
