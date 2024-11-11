//2 - Faça um programa que receba três números, calcule e mostre a multiplicação desses
//numeros.

#include <stdio.h>

int main () {
    float num1, num2, num3, resultado;

    printf("\n\nDigite o numero 1: ");
    scanf("%f", &num1);
    printf("\n\nDigite o numero 2: ");
    scanf("%f", &num2);
    printf("\n\nDigite o numero 3: ");
    scanf("%f", &num3);

    resultado = num1 * num2 * num3;
    printf("\n\nA area do quadrado eh: %f", resultado);

    return 0;
}