#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Portuguese");
    system("color 2");

    int * ptr;
    int cont = 7;

    ptr = &cont;

    printf("conteúdo da variável cont = %d \n",cont);
    printf("Endereço da variável cont = %p \n\n",&cont);

    printf("Conteúdo do ponteiro ptr = %p\n",ptr);
    printf("O valor da variável cont acessada pelo ponteiro ptr = %d\n",*ptr);

    return 0;
}
