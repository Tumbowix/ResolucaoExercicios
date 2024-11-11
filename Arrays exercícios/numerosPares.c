/*Desenvolva um programa que leia 6 números inteiros, armazene-os em um array e conte 
quantos desses números são pares.*/

#include <stdio.h>

int main () {
    int numerosInteiros[6], numerosPares;
    
    for(int i = 0; i < 6; i++ ){
        printf("Informe o numero %d\n", i + 1);
        scanf("%d", &numerosInteiros[i]);
    }

        for (int i = 1; i < 10; i++){
        if (numerosInteiros % 2 == 0) {
            numerosPares = numerosInteiros[i];
        }
    }

     for(int i = 0; i < 8; i++) {
        if numerosPares % 2 == 0
        numerosPares = numerosInteiros[i] + 1;
    }

        printf("\n\nOs numeros pares sao: \n%.2f", numerosPares);   

    return 0;
}