#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int i=1;

    //  *while = 1 2 3 4 5 6 7 8 9 10
    /*

    while (i <= 10) {
        printf("%dª ", i);
        i++;
    }

    */


    do{
        printf("%d ", i);
        i++;
    }while(i <= 10);




    return 0;
}
