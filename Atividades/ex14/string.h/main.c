#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 3");

    char aluno1[25]="Ciencia da Computacao";
    char aluno2[15];

    strncpy (aluno2, aluno1, 14);

    aluno2[15]= '\0';
    printf("Nome2 = %s\n",aluno2);

    return 0;
}
