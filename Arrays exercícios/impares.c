/*43.Escreva um aplicativo em C mostra todos os números ímpares de 1 até 100.


#include <stdio.h>

int main () {
    int numerosInteiros, numerosImpares;
    
    for(int i = 0; i <= 100; i++ ){
        
        if (numerosInteiros % 2 == 0) {
            numerosImpares = numerosInteiros[i] + 1;
        }
    
    }

        printf("\n\nOs numeros impares sao: \n%d", numerosImpares);   

    return 0;
}*/

#include <stdio.h>

int main() {
    int i;

    printf("Números ímpares de 1 até 100 são:\n");
    for (i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}