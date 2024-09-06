#include <stdio.h>

int main() {
int tipoConversao;
float valor, resultado;
int unidadeOrigem, unidadeDestino;

    printf("Escolha o tipo de conversao:\n");
        printf("1 - Temperatura\n");
            printf("2 - Distancia\n");
                printf("3 - Tempo\n");
                    scanf("%d", &tipoConversao);

    switch (tipoConversao)
    {
        case 1: // Conversão de Temperatura
            printf("Escolha a unidade de origem:\n");
                printf("1 - Celsius\n");
                    printf("2 - Fahrenheit\n");
                        printf("3 - Kelvin\n");
                            scanf("%d", &unidadeOrigem);

            printf("Escolha a unidade de destino:\n");
                printf("1 - Celsius\n");
                    printf("2 - Fahrenheit\n");
                        printf("3 - Kelvin\n");
                            scanf("%d", &unidadeDestino);

            printf("Digite o valor da temperatura: ");
                scanf("%f", &valor);

            if (unidadeOrigem == 1 && unidadeDestino == 2)
            {
                resultado = (valor * 9/5) + 32; // Celsius para Fahrenheit
                    printf("%.2f Celsius e equivalente a %.2f Fahrenheit.\n", valor, resultado);
            }
            else if (unidadeOrigem == 1 && unidadeDestino == 3)
            {
                resultado = valor + 273.15; // Celsius para Kelvin
                    printf("%.2f Celsius é equivalente a %.2f Kelvin.\n", valor, resultado);
            }
            else if (unidadeOrigem == 2 && unidadeDestino == 1)
            {
                resultado = (valor - 32) * 5/9; // Fahrenheit para Celsius
                    printf("%.2f Fahrenheit e equivalente a %.2f Celsius.\n", valor, resultado);
            }
            else if (unidadeOrigem == 2 && unidadeDestino == 3)
            {
                resultado = (valor - 32) * 5/9 + 273.15; // Fahrenheit para Kelvin
                    printf("%.2f Fahrenheit e equivalente a %.2f Kelvin.\n", valor, resultado);
            }
            else if (unidadeOrigem == 3 && unidadeDestino == 1)
            {
                resultado = valor - 273.15; // Kelvin para Celsius
                    printf("%.2f Kelvin e equivalente a %.2f Celsius.\n", valor, resultado);
            }
            else if (unidadeOrigem == 3 && unidadeDestino == 2)
            {
                resultado = (valor - 273.15) * 9/5 + 32; // Kelvin para Fahrenheit
                    printf("%.2f Kelvin e equivalente a %.2f Fahrenheit.\n", valor, resultado);
            }
            else if (unidadeOrigem == unidadeDestino)
            {
                printf("A unidade de origem e destino sao as mesmas. O valor continua %.2f.\n", valor);
            }
            else
            {
                printf("Unidades invalidas para temperatura.\n");
            }
        break;

        case 2: // Conversão de Distância
            printf("Escolha a unidade de origem:\n");
                printf("1 - Metros\n");
                    printf("2 - Quilometros\n");
                        printf("3 - Milhas\n");
                            scanf("%d", &unidadeOrigem);

            printf("Escolha a unidade de destino:\n");
                printf("1 - Metros\n");
                    printf("2 - Quilometros\n");
                        printf("3 - Milhas\n");
                            scanf("%d", &unidadeDestino);

            printf("Digite o valor da distancia: ");
                scanf("%f", &valor);

            if (unidadeOrigem == 1 && unidadeDestino == 2)
            {
                resultado = valor / 1000; // Metros para Quilômetros
                    printf("%.2f Metros e equivalente a %.2f Quilometros.\n", valor, resultado);
            }
            else if (unidadeOrigem == 1 && unidadeDestino == 3)
            {
                resultado = valor / 1609.34; // Metros para Milhas
                    printf("%.2f Metros e equivalente a %.2f Milhas.\n", valor, resultado);
            }
            else if (unidadeOrigem == 2 && unidadeDestino == 1)
            {
                resultado = valor * 1000; // Quilômetros para Metros
                    printf("%.2f Quilometros e equivalente a %.2f Metros.\n", valor, resultado);
            }
            else if (unidadeOrigem == 2 && unidadeDestino == 3)
            {
                resultado = valor / 1.60934; // Quilômetros para Milhas
                    printf("%.2f Quilometros e equivalente a %.2f Milhas.\n", valor, resultado);
            }
            else if (unidadeOrigem == 3 && unidadeDestino == 1)
            {
                resultado = valor * 1609.34; // Milhas para Metros
                    printf("%.2f Milhas e equivalente a %.2f Metros.\n", valor, resultado);
            }
            else if (unidadeOrigem == 3 && unidadeDestino == 2)
            {
                resultado = valor * 1.60934; // Milhas para Quilômetros
                    printf("%.2f Milhas e equivalente a %.2f Quilometros.\n", valor, resultado);
            }
            else if (unidadeOrigem == unidadeDestino)
            {
                printf("A unidade de origem e destino sao as mesmas. O valor continua %.2f.\n", valor);
            }
            else
            {
                printf("Unidades invalidas para distancia.\n");
            }
        break;

        case 3: // Conversão de Tempo
            printf("Escolha a unidade de origem:\n");
                printf("1 - Segundos\n");
                    printf("2 - Minutos\n");
                        printf("3 - Horas\n");
                            scanf("%d", &unidadeOrigem);

            printf("Escolha a unidade de destino:\n");
                printf("1 - Segundos\n");
                    printf("2 - Minutos\n");
                        printf("3 - Horas\n");
                            scanf("%d", &unidadeDestino);

            printf("Digite o valor do tempo: ");
                scanf("%f", &valor);

            if (unidadeOrigem == 1 && unidadeDestino == 2)
            {
                resultado = valor / 60; // Segundos para Minutos
                    printf("%.2f Segundos e equivalente a %.2f Minutos.\n", valor, resultado);
            }
            else if (unidadeOrigem == 1 && unidadeDestino == 3)
            {
                resultado = valor / 3600; // Segundos para Horas
                    printf("%.2f Segundos e equivalente a %.2f Horas.\n", valor, resultado);
            }
            else if (unidadeOrigem == 2 && unidadeDestino == 1)
            {
                resultado = valor * 60; // Minutos para Segundos
                    printf("%.2f Minutos e equivalente a %.2f Segundos.\n", valor, resultado);
            }
            else if (unidadeOrigem == 2 && unidadeDestino == 3)
            {
                resultado = valor / 60; // Minutos para Horas
                    printf("%.2f Minutos e equivalente a %.2f Horas.\n", valor, resultado);
            }
            else if (unidadeOrigem == 3 && unidadeDestino == 1)
            {
                resultado = valor * 3600; // Horas para Segundos
                    printf("%.2f Horas e equivalente a %.2f Segundos.\n", valor, resultado);
            }
            else if (unidadeOrigem == 3 && unidadeDestino == 2)
            {
                resultado = valor * 60; // Horas para Minutos
                    printf("%.2f Horas e equivalente a %.2f Minutos.\n", valor, resultado);
            }
            else if (unidadeOrigem == unidadeDestino)
            {
                printf("A unidade de origem e destino saao as mesmas. O valor continua %.2f.\n", valor);
            }
            else
            {
                printf("Unidades invalidas para tempo.\n");
            }
        break;

        default:
            printf("Opcao de conversao invalida.\n");
        break;
    }

return 0;
}
// QUAL O PROPOSITO DE SE CRIAR ESTA ABERRAÇÃO DE 190 LINHAS SE EU PODIA TER FEITO PROGAMAS SEPARADOS!