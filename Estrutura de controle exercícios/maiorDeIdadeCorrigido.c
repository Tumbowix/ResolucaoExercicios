#include <stdio.h>

int main()
{
    // Verificar se o usuário é maior de idade.
    // Só poderá acessar o sistema se fo maior de idade

    // Variáveis
    int idade, cpf;

    printf("\n\n Informe sua idade: \n");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("\n\n Voce nao pode acessar este site");
    }

    else
    {
        printf("\n\n insira seu cpf: \n");
        scanf("%d", &cpf);

        printf("\n\n Bem vindo cidadao de cpf: %d\n", cpf);
    }

    printf("valeu, falou");

    return 0;
