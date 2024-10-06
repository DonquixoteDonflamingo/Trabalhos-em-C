#include <stdio.h>
#include <math.h>

int main()
{
float numero, quadrado, cubo, raizQuadrada, raizCubica;

    printf("Digite um numero positivo maior que zero: ");
        scanf("%f", &numero);

    quadrado = pow(numero, 2);
    cubo = pow(numero, 3);
    raizQuadrada = sqrt(numero);
    raizCubica = cbrt(numero);

    printf("Quadrado: %.2f\n", quadrado);
        printf("Cubo: %.2f\n", cubo);
            printf("Raiz Quadrada: %.2f\n", raizQuadrada);
                printf("Raiz Cubica: %.2f\n", raizCubica);

return 0;
}
