#include <stdio.h>
#include <math.h>

int main() {
int n;
double soma = 0, somaQuadrados = 0, media, desvio;
    
    printf("Quantos numeros: ");
        scanf("%d", &n);
    
double numeros[n];

for (int i = 0; i < n; i++) 
{
    printf("Numero %d: ", i + 1);
        scanf("%lf", &numeros[i]);
    soma += numeros[i];
    somaQuadrados += pow(numeros[i], 2);
}
    
    media = soma / n;
    desvio = sqrt((somaQuadrados / n) - pow(media, 2));
        printf("Desvio padrao: %lf\n", desvio);
    
return 0;
}
