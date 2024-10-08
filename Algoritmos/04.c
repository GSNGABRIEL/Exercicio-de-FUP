#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, resultado;

    printf("Digite um valor qualquer: ");
    scanf("%d", &num1);

    printf("Digite outro valor qualquer: ");
    scanf("%d", &num2);

    resultado = abs(num1) - abs(num2);

    printf("o resultado absoluto de (%d) - (%d) = %d", num1, num2, resultado);
    return 0;
}
