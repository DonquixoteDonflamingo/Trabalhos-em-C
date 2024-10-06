#include <stdio.h>

int somaDivisiveis(int a, int b, int c) 
{
int soma = 0;
    for (int i = b; i <= c; i++) 
    {
        if (i % a == 0) soma += i;
    }
return soma;
}

int main() {
int a, b, c;
    printf("Digite tres numeros inteiros (a, b, c): ");
        scanf("%d %d %d", &a, &b, &c);
            printf("Soma dos divisiveis por %d entre %d e %d: %d\n", a, b, c, somaDivisiveis(a, b, c));
return 0;
}
