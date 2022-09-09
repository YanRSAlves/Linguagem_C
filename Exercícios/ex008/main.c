#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{

        float a, b, c, d, e;
        int quadrado, cubo, raizq;

        printf("DESCUBRA TRES OPERACOES QUADRADO, CUBO E RAIZQUADRADA!!\n");
        printf("DIGITE 5 VALORES DESTINTOS!\n");


            printf("\nDigite o Primeiro: ");
            scanf("%f", &a);

            printf("Digite o Segundo: ");
            scanf("%f", &b);

            printf("Digite o Terceiro: ");
            scanf("%f", &c);

            printf("Digite o Quarto: ");
            scanf("%f", &d);

            printf("Digite o Quinto: ");
            scanf("%f", &e);

            /*NAO CONSEGUIR USANDO ASSIM

            quadrado = a*a     &&     b*b       &&     c*c      &&     d*d       &&    e*e;
            cubo = (a*a*a)     &&    (b*b*b)    &&    (c*c*c)   &&    (d*d*d)    &&   (e*e*e);
            raizq = sqrt(a)    &&     sqrt(b)   &&     sqrt(c)  &&     sqrt(d)   &&    sqrt(e);

            */
            printf("\nESTOU FAZENDO OS CALCULOS CALMA!!!!!!\n\n");
            system("pause");



printf("\nO quadrado de a e %d, o cubo de a e %d, e a raiz quadrada de a e %d\n",quadrado=a*a,cubo=a*a*a,raizq=sqrt(a));
printf("O quadrado de b e %d, o cubo de b e %d, e b raiz quadrada de b e %d\n",quadrado=b*b,cubo=b*b*b,raizq=sqrt(b));
printf("O quadrado de c e %d, o cubo de c e %d, e c raiz quadrada de c e %d\n",quadrado=c*c,cubo=c*c*c,raizq=sqrt(c));
printf("O quadrado de d e %d, o cubo de d e %d, e d raiz quadrada de d e %d\n",quadrado=d*d,cubo=d*d*d,raizq=sqrt(d));
printf("O quadrado de e e %d, o cubo de e e %d, e e raiz quadrada de e e %d\n",quadrado=e*e,cubo=e*e*e,raizq=sqrt(e));

printf("\n\n\t\t\tEh isso muito obrigado!!\n\n");



    return 0;
}
