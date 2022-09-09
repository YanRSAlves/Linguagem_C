#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;

    printf("\t\tTECLE 3 NUMEROS IREI COLOCAR EM ORDEM!!!\n\n");

    printf("quais sao? ");
    scanf("%d %d %d",&n1 ,&n2, &n3);

    if (n1 < n2) {
           if (n1 < n3) {
                printf("%4d%4d%4d\n", n1, n2, n3);
           }else
               if (n1 < n3) {
                    printf("%4d%4d%4d\n", n1, n3, n2);
               }else
               printf("%4d%4d%4d\n", n3, n1, n2);
       }else
           if (n2 < n3){
               if (n1 < n3) {
                printf("%4d%4d%4d\n", n2, n1, n3);
               }else
               printf("%4d%4d%4d\n", n2, n3, n1);
           }else
            printf("%4d%4d%4d\n", n3 ,n2, n1);




    return 0;

}
