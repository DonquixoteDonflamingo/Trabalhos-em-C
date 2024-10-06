#include <stdio.h>

int main()
{
float salario, percentual, aumento, novoSalario;

    printf("Digite o salario atual: ");
        scanf("%f", &salario);

    printf("Digite o percentual de aumento: ");
        scanf("%f", &percentual);

    aumento = salario * (percentual / 100);
    novoSalario = salario + aumento;

    printf("O aumento e: %.2f\n", aumento);
        printf("O novo salario e: %.2f\n", novoSalario);

return 0;
}
