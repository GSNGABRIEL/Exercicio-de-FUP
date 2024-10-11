#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota1, nota2, nota5, nota10, nota20, nota50, nota100, valor;

    printf("Digite o valor para ser trocado: ");
    scanf("%d", &valor);

    nota100 = valor / 100;
    valor %= 100;

    nota50 = valor / 50;
    valor %= 50;

    nota20 = valor / 20;
    valor %= 20;

    nota10 = valor / 10;
    valor %= 10;

    nota5 = valor / 5;
    valor %= 5;

    nota2 = valor / 2;
    valor %= 2;

    nota1 = valor;

    printf("Nota 1: %d\nNota 2: %d\nNota 5: %d\nNota 10: %d\nNota 20: %d\nNota 50: %d\nNota 100: %d\n", nota1, nota2, nota5, nota10, nota20, nota50, nota100);
    return 0;
}
