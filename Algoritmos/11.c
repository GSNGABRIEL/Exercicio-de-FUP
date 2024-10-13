#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, porcentagem;
    int codigo;

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    printf("Digite seu codigo: ");
    scanf("%d", &codigo);

    switch (codigo)
    {
    case 1:
        porcentagem = .4;
        break;

    case 2:
        porcentagem = .25;
        break;

    case 3:
        porcentagem = .1;
        break;

    case 4:
        porcentagem = .005;
        break;

    default:
        printf("ERRO!\n");
        porcentagem = 0;
        break;
    }

    salario = salario * porcentagem + salario;
    printf("Seu salario ajustado eh: R$ %.2f", salario);
    return 0;
}
