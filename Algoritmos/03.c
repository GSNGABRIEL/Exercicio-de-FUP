#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    int peso1, peso2, peso3;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("Digite a nota 2: ");
    scanf("%f", &nota2);

    printf("Digite a nota 3: ");
    scanf("%f", &nota3);

    printf("Digite o peso da nota 1: ");
    scanf("%d", &peso1);

    printf("Digite o peso da nota 2: ");
    scanf("%d", &peso2);

    printf("Digite o peso da nota 3: ");
    scanf("%d", &peso3);

    media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada das notas %f, %f e %f é: %f", nota1, nota2, nota3, media);
    return 0;
}
