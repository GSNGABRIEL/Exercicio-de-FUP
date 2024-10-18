#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, numero;

    printf("Digite um valor: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        for (int i = 1; i <= numero; i++)
        {
            printf("%d", i);

            if (i < numero)
            {
                printf(" + ");
            }

            soma += i;
        }
        printf(" = %d", soma);
    }
    return 0;
}
