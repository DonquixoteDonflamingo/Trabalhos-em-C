#include <stdio.h>

int main()
{
int segundos, dias, horas, minutos, segRestantes;

    printf("Digite a quantidade em segundos: ");
        scanf("%d", &segundos);

    dias = segundos / 86400;
    horas = (segundos % 86400) / 3600;
    minutos = (segundos % 3600) / 60;
    segRestantes = segundos % 60;

    printf("%d dias, %d horas, %d minutos, %d segundos\n", dias, horas, minutos, segRestantes);

return 0;
}
