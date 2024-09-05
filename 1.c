#include <stdio.h>

int main() {
int I;
float A, B, C, temp;

    // Recebe os valores de I, A, B, C
    printf("Digite o valor de I (1, 2 ou 3): ");
    scanf("%d", &I);
    
    printf("Digite os valores de A, B e C: ");
    scanf("%f %f %f", &A, &B, &C);

switch(I)
{
    case 1:
        // Ordena em ordem crescente
        if (A > B)
        {
            temp = A; A = B; B = temp;
        }
        if (A > C) 
        {
            temp = A; A = C; C = temp;
        }
        if (B > C)
        {
            temp = B; B = C; C = temp;
        }
            printf("Ordem crescente: %.2f, %.2f, %.2f\n", A, B, C);
        break;

        case 2:
        // Ordena em ordem decrescente
        if (A < B)
        {
            temp = A; A = B; B = temp;
        }
        if (A < C)
        {
            temp = A; A = C; C = temp;
        }
        if (B < C)
        {
            temp = B; B = C; C = temp;
        }
            printf("Ordem decrescente: %.2f, %.2f, %.2f\n", A, B, C);
        break;

        case 3:
        // Coloca o maior valor no meio
        if (A > B && A > C)
        {
            printf("%.2f, %.2f, %.2f\n", B, A, C);
        }
        else if (B > A && B > C)
        {
            printf("%.2f, %.2f, %.2f\n", A, B, C);
        }
        else
        {
            printf("%.2f, %.2f, %.2f\n", A, C, B);
        }
        break;

        default:
            printf("Valor de I inválido.\n");
        break;
    }

return 0;
}
