#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao;
    float converter, min, hora;

    printf("Digite o tempo para converter em segundos: (Ex: 1h e 40min = 1 40) ");
    scanf("%f %f", &hora, &min);

    printf("Converter para 1 - segundos; 2 - minutos; 3 - horas: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        converter = min * 60 + hora * 3600;
        printf("%.0fh:%.0fm em segundos %.2fs", hora, min, converter);
        break;

    case 2:
        converter = min + hora * 60;
        printf("%.0fh:%.0fm em minutos %.2fm", hora, min, converter);
        break;

    case 3:
        converter = min / 60 + hora;
        printf("%.0fh:%.0fm em horas %fh", hora, min, converter);
        break;

    default:
        printf("Opção invalida");
        break;
    }
}
