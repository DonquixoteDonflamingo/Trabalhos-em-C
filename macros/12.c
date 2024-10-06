#include <stdio.h>

int bissexto(int ano) 
{
    return (ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0);
}

int main() 
{
int ano;
    printf("Digite um ano: ");
        scanf("%d", &ano);
if (bissexto(ano)) 
{
    printf("%d e um ano bissexto\n", ano);
} 
else
{
    printf("%d nao e um ano bissexto\n", ano);
}
return 0;
}
