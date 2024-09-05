#include <stdio.h>
#include <math.h>

int main() {
char opcao;
float numero, resultado;

// Mostra o menu de opções
    printf("Menu de opcoes:\n");
    printf("a. O numero digitado ao quadrado\n");
    printf("b. O numero digitado ao cubo\n");
    printf("c. A raiz quadrada do numero digitado\n");
    printf("d. A raiz cubica do numero digitado\n");

// Recebe a opção escolhida
    printf("Digite a opcao desejada (a, b, c, d): ");
        scanf(" %c", &opcao);

// Recebe o número
    printf("Digite um numero: ");
        scanf("%f", &numero);

// Executa a operação
switch (opcao)
{
    case 'a':
        resultado = pow(numero, 2);
            printf("O numero %.2f ao quadrado e: %.2f\n", numero, resultado);
    break;

    case 'b':
        resultado = pow(numero, 3);
            printf("O numero %.2f ao cubo e: %.2f\n", numero, resultado);
    break;

    case 'c':
        if (numero >= 0)
        {
            resultado = sqrt(numero);
                printf("A raiz quadrada de %.2f e: %.2f\n", numero, resultado);
        }
        else
        {
            printf("Nao e possível calcular a raiz quadrada de um numero negativo.\n");
        }
    break;

    case 'd':
        resultado = cbrt(numero);
            printf("A raiz cubica de %.2f e: %.2f\n", numero, resultado);
    break;

    default:
        printf("Opcao invalida.\n");
    break;
}

    return 0;
}