/*38.Desenvolva um aplicativo que leia o salário e o sexo de vários funcionários.
No final, mostre o total de salários pagos aos homens e o total pago às
mulheres. O programa vai perguntar ao usuário se ele quer continuar ou não
sempre que ler os dados de um funcionário.
*/

#include <stdio.h>

int main() {
    float salario = 0, totalHomens = 0, totalMulheres = 0;
    char sexo, continuar;
   
    do {
        printf("Digite o salario do funcionario: ");
        scanf("%f", &salario);

        printf("Digite o sexo do funcionario (M/F): ");
        scanf(" %c", &sexo);

        if (sexo == 'M' || sexo == 'm') {
            totalHomens = salario + salario;
        } else if (sexo == 'F' || sexo == 'f') {
            totalMulheres = salario + salario;
        } else {
            printf("Sexo invalido! Por favor, insira 'M' para masculino ou 'F' para feminino.\n");
        }

        printf("Deseja continuar? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    printf("Total de salarios pagos aos homens: %.2f\n", totalHomens);
    printf("Total de salarios pagos as mulheres: %.2f\n", totalMulheres);

    return 0;
}