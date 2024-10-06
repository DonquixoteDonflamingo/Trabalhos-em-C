#include <stdio.h>

int cpf(int n, int d) 
{
int soma = 0, ultimoDigito;
    while (n > 0) 
    {
        soma += n % 10;
        n /= 10;
    }
    ultimoDigito = soma % 10;
return (ultimoDigito == d);
}

int main() 
{
int cpf, digito;
    printf("Digite o CPF e o digito verificador: ");
        scanf("%d %d", &cpf, &digito);
if (cpf(cpf, digito)) 
{
    printf("CPF valido!\n");
} 
else 
{
    printf("CPF invalido!\n");
}
return 0;
}
