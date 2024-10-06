#include <stdio.h>

int main() {
float precoAtual, vendaMensal, novoPreco;

    printf("Digite o preço atual do produto: ");
        scanf("%f", &precoAtual);

    printf("Digite a venda mensal media do produto: ");
        scanf("%f", &vendaMensal);

if (vendaMensal < 500 && precoAtual < 30) 
{
    novoPreco = precoAtual * 1.10;
} 
else if (vendaMensal >= 500 && vendaMensal < 1200 && precoAtual >= 30 && precoAtual < 80) 
{
    novoPreco = precoAtual * 1.15;
} 
else if (vendaMensal >= 1200 && precoAtual >= 80) 
{
    novoPreco = precoAtual * 0.80;
} 
else 
{
    novoPreco = precoAtual;
}

    printf("O novo preço e: %.2f\n", novoPreco);

return 0;
}
