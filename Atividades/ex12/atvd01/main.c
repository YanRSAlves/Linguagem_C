#include <stdio.h>
#include <stdlib.h>

int main()
{
    //atividade 01
    int contador=1;

    do{
        printf("Numero %d \n", contador);
        contador++;
    }while(contador <= 10);

    //Atividade 02

    int contador = 1;

    while (contador <= 100){
        printf("Numero %d \n ",contador);

        contador++;
    }

    // Atividade 03
    int cont;
    for (cont = 0; cont<=10;cont++){
        printf("%d° Questao: \n",cont);

    }

    //Multiplos de 12
    int contador;
    for (contador = 0;contador <= 144;contador++){
        if (contador % 12 == 0){
            printf("%d\n",contador);
        }
    }

    return 0;
}
