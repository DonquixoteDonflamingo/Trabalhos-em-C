#include <stdio.h>

void converterSegundos(int totalSegundos, int *horas, int *minutos, int *segundos) 
{
    *horas = totalSegundos / 3600;
    *minutos = (totalSegundos % 3600) / 60;
    *segundos = totalSegundos % 60;
}

int main() 
{
int totalSegundos, horas, minutos, segundos;
    printf("Digite o numero de segundos: ");
        scanf("%d", &totalSegundos);
            converterSegundos(totalSegundos, &horas, &minutos, &segundos);
                printf("%d segundos = %d horas, %d minutos e %d segundos\n", totalSegundos, horas, minutos, segundos);
return 0;
}
