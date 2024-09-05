#include <stdio.h>

int main() {
int codigo_produto, codigo_pais;
float peso_kg, peso_gramas, preco_total, imposto, valor_total;
float preco_por_grama;

    printf("Digite o código do produto (1 a 10): ");
        scanf("%d", &codigo_produto);

    printf("Digite o peso do produto em quilos: ");
        scanf("%f", &peso_kg);

    printf("Digite o código do país de origem (1 a 3): ");
        scanf("%d", &codigo_pais);

    peso_gramas = peso_kg * 1000;

    if (codigo_produto >= 1 && codigo_produto <= 4)
    {
        preco_por_grama = 10;
    }
    else if (codigo_produto >= 5 && codigo_produto <= 7)
    {
        preco_por_grama = 25;
    }
    else if (codigo_produto >= 8 && codigo_produto <= 10)
    {
        preco_por_grama = 35;
    }


    preco_total = peso_gramas * preco_por_grama;

    if (codigo_pais == 1)
    {
        imposto = preco_total * 0.0;  // Sem imposto
    }
    else if (codigo_pais == 2)
    {
        imposto = preco_total * 0.15;  // 15% de imposto
    }
    else if (codigo_pais == 3)
    {
        imposto = preco_total * 0.25;  // 25% de imposto
    }

    valor_total = preco_total + imposto;

    printf("Peso do produto em gramas: %.2f\n", peso_gramas);
        printf("Preço total do produto: %.2f\n", preco_total);
            printf("Valor do imposto: %.2f\n", imposto);
                printf("Valor total a pagar: %.2f\n", valor_total);

return 0;
}