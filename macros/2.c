#include <stdio.h>

int somaEntre(int a, int b)
{
int soma = 0;
    for (int i = a + 1; i < b; i++)
    {
        soma += i;
    }
return soma;
}

int main() 
{
int a, b;
    printf("Digite dois numeros inteiros: ");
        scanf("%d %d", &a, &b);
            printf("Soma entre %d e %d: %d\n", a, b, somaEntre(a, b));
return 0;
}
