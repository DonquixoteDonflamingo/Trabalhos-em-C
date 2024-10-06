#include <stdio.h>

float calcularMedia(float n1, float n2, float n3, char tipo) 
{
if (tipo == 'A') 
{
    return (n1 + n2 + n3) / 3;
} 
else if (tipo == 'P') 
{
    return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
}
return 0;
}

int main() 
{
float n1, n2, n3;
char tipo;
    printf("Digite tres notas: ");
        scanf("%f %f %f", &n1, &n2, &n3);
    printf("Escolha o tipo de media (A para aritmetica, P para ponderada): ");
        scanf(" %c", &tipo);
    printf("Media: %.2f\n", calcularMedia(n1, n2, n3, tipo));
return 0;
}
