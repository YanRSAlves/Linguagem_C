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

    printf("conte�do da vari�vel cont = %d \n",cont);
    printf("Endere�o da vari�vel cont = %p \n\n",&cont);

    printf("Conte�do do ponteiro ptr = %p\n",ptr);
    printf("O valor da vari�vel cont acessada pelo ponteiro ptr = %d\n",*ptr);

    return 0;
}
