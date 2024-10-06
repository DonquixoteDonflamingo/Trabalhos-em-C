#include <stdio.h>

int main()
{
int numero, d1, d2, d3, d4, d5;

    printf("Digite um numero de 5 digitos: ");
        scanf("%d", &numero);

    d5 = numero % 10;
    d4 = (numero / 10) % 10;
    d3 = (numero / 100) % 10;
    d2 = (numero / 1000) % 10;
    d1 = (numero / 10000);

    printf("%d   %d   %d   %d   %d\n", d1, d2, d3, d4, d5);

return 0;
}
