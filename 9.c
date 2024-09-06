#include <stdio.h>

int main() {
int codigoEstado, codigoCarga;
float pesoToneladas, precoQuilo, imposto, valorCarga, valorImposto, valorTotal;

    printf("Digite o codigo do estado (1 a 5): ");
        scanf("%d", &codigoEstado);

    printf("Digite o peso da carga (em toneladas): ");
        scanf("%f", &pesoToneladas);

    printf("Digite o codigo da carga (10 a 40): ");
        scanf("%d", &codigoCarga);

    float pesoQuilos = pesoToneladas * 1000;

    if (codigoCarga >= 10 && codigoCarga <= 20)
    {
        precoQuilo = 100;
    }
    else if (codigoCarga >= 21 && codigoCarga <= 30)
    {
        precoQuilo = 250;
    }
    else if (codigoCarga >= 31 && codigoCarga <= 40)
    {
        precoQuilo = 340;
    }
    else 
    {
        printf("Código de carga inválido.\n");
    return 1;
    }

    valorCarga = precoQuilo * pesoQuilos;

    switch (codigoEstado)
    {
        case 1:
            imposto = 0.35;
        break;
        
        case 2:
            imposto = 0.25;
        break;
        
        case 3:
            imposto = 0.15;
        break;
        
        case 4:
            imposto = 0.05;
        break;
        
        case 5:
            imposto = 0.0;
        break;
        
        default:
            printf("Código do estado inválido.\n");
        return 1;
    }

    valorImposto = valorCarga * imposto;
    valorTotal = valorCarga + valorImposto;

    printf("Valor da carga: R$ %.2f\n", valorCarga);
        printf("Valor do imposto: R$ %.2f\n", valorImposto);
            printf("Valor total a ser pago: R$ %.2f\n", valorTotal);

return 0;
}