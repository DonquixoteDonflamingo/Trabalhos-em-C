#include <stdio.h>

void criptografar(int num) 
{
int d1, d2, d3, d4;
    d1 = (num / 1000 + 7) % 10;
    d2 = (num / 100 % 10 + 7) % 10;
    d3 = (num / 10 % 10 + 7) % 10;
    d4 = (num % 10 + 7) % 10;
        printf("Criptografado: %d%d%d%d\n", d3, d4, d1, d2);
}

void descriptografar(int num) 
{
    int d1, d2, d3, d4;
    d1 = (num / 1000 + 3) % 10;
    d2 = (num / 100 % 10 + 3) % 10;
    d3 = (num / 10 % 10 + 3) % 10;
    d4 = (num % 10 + 3) % 10;
        printf("Descriptografado: %d%d%d%d\n", d3, d4, d1, d2);
}

int main() 
{
int num;
    printf("Digite um numero de 4 digitos: ");
        scanf("%d", &num);
            criptografar(num);
return 0;
}
