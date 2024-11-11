/*Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos 
(incluindo os valores informados pelo usuário). Tratar casos onde segundo
valor lido for menor que o primeiro valor, exibindo a mensagem “Numero invalido”*/
e executando novamente a operação. 

#include <stdio.h>

int main() {
    int i = 0, inteiro1, inteiro2, soma;

    do
    {
    printf("Informe o primeiro valor inteiro %d\n", i + 1);
    scanf("%d", &inteiro1);
    printf("Informe o segundo valor inteiro %d\n", i + 1);
    scanf("%d", &inteiro2);       
    

    if (inteiro1 > inteiro2)
    {
    printf("\nNumero invalido\n");
    }
    
    
    for (int i = inteiro1; i <= inteiro2; i++) {
    soma = i + 1;
    }
    printf("A soma dos inteiros entre %d e %d é: %d\n", inteiro1, inteiro2, soma);
    } while (valor2 < valor1)

    return 0;
}*/

/*#include <stdio.h>

int main() {
    int valor1, valor2, resultadoSoma = 0, i;

        printf("Digite o primeiro valor: ");
        scanf("%d", &valor1);
        printf("Digite o segundo valor: ");
        scanf("%d", &valor2);

        if (valor2 < valor1) {
            printf("Numero invalido\n");
        } else {

        soma = 0;
        for (i = valor1; i <= valor2; i++) {
            resultadoSoma = 1 + resultadoSoma;
        }
        }

        printf("A soma dos inteiros entre %d e %d eh: %d\n", valor1, valor2, resultadoSoma);
        }

    return 0;
}*/