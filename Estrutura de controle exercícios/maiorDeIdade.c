// Verificar se o usuario é maior de idade.

#include <stdio.h>

int main()
{
    int idade, CPF;

    printf("\n\nInforme a sua idade\n\n");
    scanf("%d", &idade);

    if (idade < 18)
    {
        printf("\n\nVoce nao pode acessar esse site\n\n");
    }

    else
    {
        printf("\n\nInsira seu CPF\n\n");
        scanf("%d", CPF);
        printf("\n\nParabens, cidadao CPF %d voce esta autorizado a entrar no site", CPF\n\n);
    }

    return 0
}
