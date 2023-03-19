#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    char aluno1[20]="Maria";
    char aluno2[20]="Pedro";

    char aux[20];
    printf("Atividade para troca de valores em strings:\n\n");

    printf("Aluno 1 é %s \n",aluno1);
    printf("Aluno 2 é %s \n",aluno2);

    strcpy(aux, aluno2); // o valor de aluno 2 que é "Pedro" vai para aux
    strcpy(aluno2, aluno1);// o valor de aluno 1 que é "Maria" vai para o aluno 1
    strcpy(aluno1, aux);// o valor de aux que é "pedro" vai para aluno 1

    printf("\nagora o aluno 1 é %s \n",aluno1);
    printf("agora o aluno 2 é %s \n",aluno2);

    return 0;
}
