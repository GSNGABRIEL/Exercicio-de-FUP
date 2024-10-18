#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;

    for (int i = 1; i <= 100; i++)
    {
        printf("%d", i);

        if (i < 100)
        {
            printf(" + ");
        }

        soma += i;
    }

    printf(" = %d", soma);

    return 0;
}
