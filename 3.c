#include <stdio.h>
#include <math.h>

int main() {
char opcao;
float num1, num2, resultado;

// Mostra o menu de operações
    printf("Menu de Operacoes:\n");
        printf("a. Soma\n");
            printf("b. Subtracao\n");
                printf("c. Multiplicacao\n");
                    printf("d. Divisao\n");
                        printf("e. Elevar ao numero\n");
                            printf("f. Raiz de qualquer indice\n");
                                printf("g. Resto da divisao\n");

// Recebe a opção do usuário
    printf("Digite a opcao desejada (a, b, c, d, e, f, g): ");
        scanf(" %c", &opcao);

// Pode precisar de um ou dois números // TODO: SE COLOCAR UM NÚMERO MUITO GRANDE APARECE UMA MENSAGEM ESTRANHA!
    if (opcao == 'e' || opcao == 'f')
    {
        printf("Digite a base e o expoente/indice: ");
            scanf("%f %f", &num1, &num2);
    }
    else if (opcao == 'g')
    {
// Para o resto, precisa de dois numeros
    int int1, int2;
        printf("Digite dois numeros inteiros: ");
            scanf("%d %d", &int1, &int2);
        resultado = int1 % int2;
            printf("O resto de %d dividido por %d e: %.0f\n", int1, int2, resultado);
    return 0;
    }
    else
    {
        printf("Digite dois numeros: ");
            scanf("%f %f", &num1, &num2);
    }

// Realiza a operação
    switch (opcao)
    {
        case 'a':  // Soma
            resultado = num1 + num2;
                printf("%.2f + %.2f = %.2f\n", num1, num2, resultado);
        break;

        case 'b':  // Subtração
            resultado = num1 - num2;
                printf("%.2f - %.2f = %.2f\n", num1, num2, resultado);
        break;

        case 'c':  // Multiplicação
            resultado = num1 * num2;
                printf("%.2f * %.2f = %.2f\n", num1, num2, resultado);
        break;

        case 'd':  // Divisão
            if (num2 != 0)
            {
                resultado = num1 / num2;
                    printf("%.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            else
            {
                printf("Erro: Divisao por zero nao e permitida.\n");
            }
        break;

        case 'e':  // Eleva o número
            resultado = pow(num1, num2);
                printf("%.2f elevado a %.2f e: %.2f\n", num1, num2, resultado);
        break;

        case 'f':  // Raiz de qualquer índice
            if (num1 >= 0 || ((int)num2 % 2 != 0))
            {
                resultado = pow(num1, 1 / num2);
                    printf("A raiz %.2f de %.2f e: %.2f\n", num2, num1, resultado);
            } else
            {
                printf("Erro: Nao e possivel calcular a raiz de um numero negativo para indice par.\n");
            }
        break;

        case 'g':  // Resto
        break;

        default:
            printf("Opcao invalida.\n");
        break;
    }

return 0;
}