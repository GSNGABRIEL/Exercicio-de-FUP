#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seg, min, hora;

    printf("Digite o tempo para converter em segundos: (Ex: 1h e 40min = 1 40) ");
    scanf("%d %d", &hora, &min);

    seg = min * 60 + hora * 3600;

    printf("Seu tempo de %dh:%dm é %ds", hora, min, seg);
    return 0;
}
