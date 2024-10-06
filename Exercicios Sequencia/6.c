#include <stdio.h>

int main()
{
float pesoSaco, racaoGato, racaoTotal, racaoRestante;

    printf("Digite o peso do saco de racao (em kg): ");
        scanf("%f", &pesoSaco);

    printf("Digite a quantidade de racao fornecida para cada gato (em gramas): ");
        scanf("%f", &racaoGato);

    racaoTotal = (racaoGato * 2) * 5 / 1000;
    racaoRestante = pesoSaco - racaoTotal;

    printf("Apos 5 dias, restara %.2f kg de racao no saco.\n", racaoRestante);

return 0;
}
