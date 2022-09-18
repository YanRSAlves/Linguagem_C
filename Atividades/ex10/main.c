#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");



     Escreva um programa que leia 4 valores (N1, N2, N3 e N4) referentes às quatro
notas de um aluno. A seguir, se a média ponderada com pesos 2,3,4 e 1 para as
respectivas provas for maior ou igual a 7, mostre uma mensagem: "Aluno foi
aprovado". Se a nota for inferior a 5, mostrar uma mensagem: "Aluno foi reprovado".
Se a média ficou entre 5 e 7, fazer a leitura de uma variável (EX) correspondente a
nota de exame, recalcular a média (somar a nota do exame com a nota anterior e
dividir por 2) e mostrar se o aluno foi ou não aprovado.



    return 0;
}
