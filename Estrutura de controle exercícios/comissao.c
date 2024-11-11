//funcionario recebe 4% de comissão sobre vendas
//programa de receba o salário e o valor das suas vendas
//exibir quanto de comissão ele vair receber e o salário total
#include <stdio.h>

int main() {

    float salario, valorDasVendas, comissao, SalarioTotal;

    printf("Informe o salário: ");
    scanf("%f", &salario);

    printf("Informe o valor total das vendas: ");
    scanf("%f", &valorDasVendas);

    comissao = valorDasVendas * 0.04;
    SalarioTotal = salario + comissao;

    printf("\n\nO valor da comissao foi de %.2f \n\ne o salário foi de %.2f", comissao, SalarioTotal);

    return 0;
}
