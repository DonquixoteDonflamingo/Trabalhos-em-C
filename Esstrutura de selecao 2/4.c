#include <stdio.h>

int main() {
int N, soma = 0;
    
    printf("Digite um valor inteiro positivo N: ");
        scanf("%d", &N);
    
for (int i = 1; i <= N; i++)
{
    soma += i;
}
    
    printf("Soma: %d\n", soma);
return 0;
}
