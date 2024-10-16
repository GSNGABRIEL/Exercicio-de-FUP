#include <stdio.h>
#include <stdlib.h>

int main()
{
    int prato, sobremesa, bebida, total;

    printf("Escolha um prato:\n");
    printf("1 - Vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne\n");
    scanf("%d", &prato);

    if (prato == 1)
    {
        prato = 180;
    }
    else if (prato == 2)
    {
        prato = 230;
    }
    else if (prato == 3)
    {
        prato = 250;
    }
    else if (prato == 4)
    {
        prato = 350;
    }
    else
    {
        prato = 0;
    }

    printf("Escolha uma sobremesa:\n");
    printf("1 - Abacaxi, 2 - Sorvete Diet, 3 - Mousse Diet, 4 - Mousse de Chocolate\n");
    scanf("%d", &sobremesa);

    if (sobremesa == 1)
    {
        sobremesa = 75;
    }
    else if (sobremesa == 2)
    {
        sobremesa = 110;
    }
    else if (sobremesa == 3)
    {
        sobremesa = 170;
    }
    else if (sobremesa == 4)
    {
        sobremesa = 200;
    }
    else
    {
        sobremesa = 0;
    }

    printf("Escolha uma bebida:\n");
    printf("1 - Cha, 2 - Suco de Laranja, 3 - Suco de Melao, 4 - Refrigerante Diet\n");
    scanf("%d", &bebida);

    if (bebida == 1)
    {
        bebida = 20;
    }
    else if (bebida == 2)
    {
        bebida = 70;
    }
    else if (bebida == 3)
    {
        bebida = 100;
    }
    else if (bebida == 4)
    {
        bebida = 65;
    }
    else
    {
        bebida = 0;
    }

    total = prato + sobremesa + bebida;

    printf("o total de calorias da sua refeicao eh: %d cal", total);
    return 0;
}
