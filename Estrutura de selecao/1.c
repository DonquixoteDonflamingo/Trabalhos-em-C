#include <stdio.h>

int main()
{
int dia, mes, ano;

    printf("Digite sua data de nascimento (dia, mes, ano): ");
        scanf("%d %d %d", &dia, &mes, &ano);

if (ano <= 1964)
{
    printf("Seu perfil e da Geração Baby Boomer\n");
}
else if (ano <= 1980)
{
    printf("Seu perfil e da Geração X\n");
}
else if (ano <= 1996)
{
    printf("Seu perfil e da Geração Y (Millennials)\n");
}
else
{
    printf("Seu perfil e da Geração Z\n");
}

return 0;
}
