#include <stdio.h>
#include <stdlib.h>

int main()
{
    float valor, porcentagem;
    int opcao;
    printf("Digite um valor: R$ ");
    scanf("%f", &valor);

    printf("Você quer (1) - Aumentar, (2) - diminuir: ");
    scanf("%d", &opcao);

    printf("Digite a porcentagem: ");
    scanf("%f", &porcentagem);

    porcentagem /= 100;

    switch (opcao)
    {
    case 1:
        valor = valor * porcentagem + valor;
        break;
    case 2:
        valor = valor - valor * porcentagem;
        break;

    default:
        printf("ERRO!\n");
        break;
    }

    printf("O novo valor R$ %.2f", valor);

    return 0;
}
