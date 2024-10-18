#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0, a, b;

    printf("Valor do inicio: ");
    scanf("%d", &a);

    printf("Valor do final: ");
    scanf("%d", &b);

    for (; a <= b; a++)
    {
        printf("%d", a);

        if (a < b)
        {
            printf(" + ");
        }

        soma += a;
    }

    printf(" = %d", soma);
    return 0;
}
