#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano, diaAtual, mesAtual, anoAtual, dataDia, dataMes, dataAno;

    printf("Digite sua data de nascimento: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    printf("Digite a data atual: ");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);

    dataDia = diaAtual - dia;
    dataMes = mesAtual - mes;
    dataAno = anoAtual - ano;
    
    if (dataDia < 0)
    {
        dataMes--;
        dataDia += 30;
    }

    if (dataMes < 0)
    {
        dataAno--;
        dataMes += 12;
    }

    printf("Voce tem %d dias %d meses %d anos", dataDia, dataMes, dataAno);

    return 0;
}
