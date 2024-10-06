#include <stdio.h>

int main() {
double N, k = 1.0;
int iteracoes = 12;
    
    printf("Digite o valor de N: ");
        scanf("%lf", &N);
    
for (int i = 0; i < iteracoes; i++) 
{
    k = (k + N / k) / 2;
        printf("Iteracao %d: %.15lf\n", i + 1, k);
}
    
return 0;
}
