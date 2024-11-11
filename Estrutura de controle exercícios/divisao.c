//3. Faça um programa que receba dois números, calcule e mostre a divisão do primeiro
//número pelo segundo. Sabe-se que o segundo numero não pode ser zero, portanto não é
//necessário se preocupar com validações.

#include <stdio.h>

int main () {
    float num1, num2, resultado;

    printf("\n\nDigite o numero 1: ");
    scanf("%f", &num1);
    printf("\n\nDigite o numero 2: ");
    scanf("%f", &num2);

    resultado = num1 / num2;
    printf("\n\nA divisao eh: %f", resultado);

    return 0;
}