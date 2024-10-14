#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preco, quatidade;

    printf("Digite o preço do produto: ");
    scanf("%f", &preco);

    printf("Digite a quatidade de vendas desse produto: ");
    scanf("%f", &quatidade);

    if (quatidade < 500)
    {
        preco = preco * (-.1) + preco;
    }
    else if (quatidade <= 1200)
    {
        preco = preco * .05 + preco;
    }
    else
    {
        preco = preco * .2 + preco;
    }

    printf("Seu novo preço de acordo com suas vendas deve ser: R$ %.2f", preco);
    return 0;
}
