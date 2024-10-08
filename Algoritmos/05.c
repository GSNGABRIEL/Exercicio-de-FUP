#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso1, peso2, peso3;

    printf("Digite 3 pesos diferentes: (Ex:. 1 2 3) ");
    scanf("%f %f %f", &peso1, &peso2, &peso3);

    // peso maior
    if (peso1 > peso2 && peso1 > peso3)
    {
        printf("Peso 1 eh o mais pesado\n");
    }
    else if (peso1 < peso2 && peso2 > peso3)
    {
        printf("Peso 2 eh o mais pesado\n");
    }
    else if (peso3 > peso2 && peso1 < peso3)
    {
        printf("Peso 3 eh o mais pesado\n");
    }

    // peso menor
    if (peso1 < peso2 && peso1 < peso3)
    {
        printf("Peso 1 eh o menos pesado");
    }
    else if (peso1 > peso2 && peso2 < peso3)
    {
        printf("Peso 2 eh o menos pesado");
    }
    else if (peso3 < peso2 && peso1 > peso3)
    { 
        printf("Peso 3 eh o menos pesado");
    }

    // peso igual
    if (peso1 == peso2 && peso2 == peso3)
    {
        printf("Pesos 1, 2 e 3 são iguais");
    }
    else if (peso1 == peso2)
    {
        printf("Pesos 1 e 2 são iguais");
    }
    else if (peso2 == peso3)
    {
        printf("Pesos 2 e 3 são iguais");
    }

    return 0;
}
