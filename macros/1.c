#include <stdio.h>

int verificarNumero(int n)
{
    return (n >= 0) ? 1 : 0;
}

int main()
{
int n;
    printf("Digite um numero: ");
        scanf("%d", &n);
            printf("O numero e %s\n", verificarNumero(n) ? "positivo" : "negativo");
return 0;
}
