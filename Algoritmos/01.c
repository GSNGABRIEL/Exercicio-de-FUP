#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, GB, KB, B;

    printf("Digite uma quantidae x de Megabyte(MB): ");
    scanf("%f", &x);

    printf("\nMegabyte convertido em:\n");
    GB = x / 1024;
    printf("Gigabyte: %f\n", GB);

    KB = x * 1024;
    printf("Kilobyte: %f\n", KB);

    B = KB * 1024;
    printf("Byte: %f\n", B);

    return 0;
}
