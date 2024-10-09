#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, ano, diaAtual, mesAtual, anoAtual, dataDia, dataMes, dataAno;

    printf("Digite sua idade (em dias, meses e anos Ex:. 1 5 35): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    printf("Digite a data atual: ");
    scanf("%d/%d/%d", &diaAtual, &mesAtual, &anoAtual);

    dataDia = diaAtual - dia;
    dataMes = mesAtual - mes;
    dataAno = anoAtual - ano;

    if(dataDia<0){
        dataMes--;
        dataDia+=30;
    }

       printf("Sua data de nascimento eh %02d/%02d/%d", dataDia, dataMes, dataAno);
    return 0;
}
