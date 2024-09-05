#include <stdio.h>

char classificacao(float altura, float peso)
{
    if (altura < 1.20)
    {
        if (peso <= 60)
            return 'A';
            else if (peso <= 90)
                return 'D';
        else
            return 'G';
    }
    else if (altura <= 1.70) 
    {
        if (peso <= 60)
            return 'B';
            else if (peso <= 90)
                return 'E';
        else
            return 'H';
    }
    else
    {
        if (peso <= 60)
            return 'C';
            else if (peso <= 90)
                return 'F';
        else
            return 'I';
    }
}

int main() {
float altura, peso;
    printf("Digite a altura da pessoa (em metros): ");
        scanf("%f", &altura);
    printf("Digite o peso da pessoa (em kg): ");
        scanf("%f", &peso);

char resultado = classificacao(altura, peso);
    printf("A classificacao da pessoa e: %c\n", resultado);

return 0;
}