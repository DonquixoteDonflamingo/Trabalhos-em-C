#include <stdio.h>

float calcularPercentual(float antigo, float atual) 
{
    return ((atual - antigo) / antigo) * 100;
}

int main() {
float antigo, atual;
    printf("Digite o valor antigo e o valor atual: ");
        scanf("%f %f", &antigo, &atual);
            printf("Percentual de acrescimo: %.2f%%\n", calcularPercentual(antigo, atual));
return 0;
}
