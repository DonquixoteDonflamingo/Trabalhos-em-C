#include <stdio.h>

int main() {
float x, y, z;

    printf("Digite os tres lados do triangulo: ");
        scanf("%f %f %f", &x, &y, &z);

if (x < y + z && y < x + z && z < x + y) 
{
    if (x == y && y == z) 
    {
        printf("Triangulo Equilatero\n");
    } 
    else if (x == y || x == z || y == z) 
    {
        printf("Triangulo Isosceles\n");
    } else 
    {
        printf("Triangulo Escaleno\n");
    }
} 
else
{
    printf("Os valores nao formam um triangulo\n");
}

return 0;
}
