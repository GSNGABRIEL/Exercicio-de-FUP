#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano;
    printf("Digite sua data de nascimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("%02d/%02d/%d\n", dia, mes, ano);
    printf("Sua idade eh: %d anos", 2024 - ano);
    return 0;
}
