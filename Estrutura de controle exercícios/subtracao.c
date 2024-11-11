//INSTRUÇÃO
//Para uma string: "%s"
//Para um número de ponto flutuante (float): "%f" ou "%lf" para double
//Para um número inteiro (int): "%d"
//Para um caractere (char): "%c"

// faça um programa que recaeba dois numeros, calcule 
// e mostre a subtração do primeiro pelo segundo numero

#include <stdio.h>


int main () {
    float numero1, numero2, resultado; 
    string nome;

      printf("\n\nDigite o numero 1: ");
    scanf("%f", &numero1);
    printf("\n\nDigite o numero 2: ");
    scanf("%f", &numero2);

    resultado = numero1 - numero2;
    printf("\n\nO resultado e %.2f\n", resultado);


    return 0;
}
