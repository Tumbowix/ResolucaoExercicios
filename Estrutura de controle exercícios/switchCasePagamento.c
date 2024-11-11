/*
Elabore um algoritmo que calcule o que deve ser pago por um produto,
considerando o preço da etiqueta (informado pelo usuário) e a escolha da condição
de pagamento. Utilize os códigos a seguir para ler qual a condição de pagamento
escolhida e efetuar o cálculo adequado.
Código Condição de pagamento
1 - À vista em dinheiro ou cheque, recebe 10% de desconto
2 - À vista no cartão de crédito, recebe 5% de desconto
3 - Em duas vezes, preço normal de etiqueta sem juros
4 - Em três vezes, preço normal de etiqueta mais juros de 10%
*/

#include <stdio.h>


int main()
{
    float precoDaEtiqueta, totalAPagar, valorDaParcela;
    int condicaoDePagamento;

    printf("\n\nDigite o preco da etiqueta\n\n");
    scanf("%f", &precoDaEtiqueta);
     printf("\n\nDigite a forma de pagamento de acordo com as opcoes abaixo \n\n1- A vista em dinheiro ou cheque, recebe 10 porcento de desconto \n2 - A vista no cartao de credito, recebe 5 porcento de desconto\n3 - Em duas vezes, preco normal de etiqueta sem juros\n4 - Em tres vezes, preco normal de etiqueta mais juros de 10 porcento\n\n");
    scanf("%d", &condicaoDePagamento);

    switch (condicaoDePagamento)
    {
    case 1:
        totalAPagar = precoDaEtiqueta - 10 * precoDaEtiqueta / 100;
        printf ("\n\nO valor total a pagar eh %.2f, a vista no dinheiro ou no PIX", totalAPagar);
        break;

    case 2:
        totalAPagar = precoDaEtiqueta - 5 * precoDaEtiqueta / 100;
        printf ("\n\nO valor total a pagar eh %.2f, a vista no credito ", totalAPagar);

    case 3:
        valorDaParcela = precoDaEtiqueta / 2;
        printf ("\n\nO valor total a pagar eh %.2f, em duas vezes de R$ %.2f ", precoDaEtiqueta, valorDaParcela);
        break;

    case 4:
        totalAPagar = precoDaEtiqueta + 5 * precoDaEtiqueta / 100;
        valorDaParcela = totalAPagar / 3;
        printf ("\n\nO valor total a pagar eh %.2f, em tres vezes de R$ %.2f ", precoDaEtiqueta, valorDaParcela);
        break;

    default:
        printf ("\n\nA opcao eh invalida");
        break;
    }

    return 0;
}