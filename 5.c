#include <stdio.h>

int main() {
int codigo;
float salarioAtual, aumento, novoSalario;

// Recebe o código e o salário atual do funcionário
    printf("Digite o codigo do cargo do funcionario (1 a 5): ");
        scanf("%d", &codigo);
    
    printf("Digite o salario atual do funcionario: ");
        scanf("%f", &salarioAtual);

    switch(codigo)
    {
        case 1: // Escriturário
            aumento = salarioAtual * 0.50;
            novoSalario = salarioAtual + aumento;
                printf("Cargo: Escriturario\n");
                    printf("Aumento de: R$ %.2f\n", aumento);
                        printf("Novo salario: R$ %.2f\n", novoSalario);
        break;

        case 2: // SECRETARIAAA
            aumento = salarioAtual * 0.35;
            novoSalario = salarioAtual + aumento;
                printf("Cargo: Secretario\n");
                    printf("Aumento de: R$ %.2f\n", aumento);
                        printf("Novo salario: R$ %.2f\n", novoSalario);
        break;

        case 3: // Caixaxa
            aumento = salarioAtual * 0.20;
            novoSalario = salarioAtual + aumento;
                printf("Cargo: Caixa\n");
                    printf("Aumento de: R$ %.2f\n", aumento);
                        printf("Novo salario: R$ %.2f\n", novoSalario);
        break;

        case 4: // Gerente
            aumento = salarioAtual * 0.10;
            novoSalario = salarioAtual + aumento;
                printf("Cargo: Gerente\n");
                    printf("Aumento de: R$ %.2f\n", aumento);
                        printf("Novo salario: R$ %.2f\n", novoSalario);
        break;

        case 5: // Diretor
            aumento = 0.0;
            novoSalario = salarioAtual;
                printf("Cargo: Diretor\n");
                    printf("Este cargo nao tem aumento.\n");
                        printf("O Salario permanece o mesmo: R$ %.2f\n", novoSalario);
        break;

        default:
            printf("Codigo de cargo invalido.\n");
        break;
    }

return 0;
}