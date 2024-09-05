#include <stdio.h>

int main() {
int opcao;
float salario, imposto, novoSalario;

    printf("Menu de opcoes:\n");
        printf("1 - Imposto\n");
            printf("2 - Novo Salario\n");
                printf("3 - Classificacao\n");
                    printf("Digite a opcao desejada -> ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 1: // Calcular Imposto
            printf("Digite o salario do funcionario: ");
                scanf("%f", &salario);
            if (salario < 500.00)
            {
                imposto = salario * 0.05;
            }
            else if (salario <= 850.00)
            {
                imposto = salario * 0.10;
            }
            else
            {
                imposto = salario * 0.15;
            }
                printf("Valor do imposto: R$%.2f\n", imposto);
        break;

        case 2: // Calcular Novo Salário
            printf("Digite o salario do funcionario: ");
                scanf("%f", &salario);
            if (salario > 1500.00)
            {
                novoSalario = salario + 25.00;
            }
            else if (salario >= 750.00)
            {
                novoSalario = salario + 50.00;
            }
            else if (salario >= 450.00)
            {
                novoSalario = salario + 75.00;
            }
            else
            {
                novoSalario = salario + 100.00;
            }
            printf("Valor do novo salario: R$%.2f\n", novoSalario);
        break;

        case 3: // Classificação
            printf("Digite o salario do funcionario: ");
                scanf("%f", &salario);
            if (salario <= 700.00)
            {
                printf("Classificacao: Mal remunerado\n");
            }
            else
            {
                printf("Classificacao: Bem remunerado\n");
            }
        break;

        default:
            printf("Opcao invalida!\n");
        break;
    }

return 0;
}