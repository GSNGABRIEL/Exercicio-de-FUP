#include <stdio.h>
#include <stdlib.h>

int main()
{
    float angulo;
    int voltas;

    printf("Digite um angulo: ");
    scanf("%f", &angulo);
    
    voltas = angulo / 360;

    printf("Deu %d voltas.\n", voltas);

    angulo -= voltas * 360;

    if (angulo < 0)
    {
        angulo += 360;
    }

    if (angulo == 0 || angulo == 180)
    {
        printf("Eixo x");
    }
    else if (angulo == 90 || angulo == 270)
    {
        printf("Eixo y");
    }
    else if (angulo < 90)
    {
        printf("Quadrante I");
    }
    else if (angulo < 180)
    {
        printf("Quadrante II");
    }
    else if (angulo < 270)
    {
        printf("Quadrante III");
    }
    else
    {
        printf("Quadrante IV");
    }
    return 0;
}
