#include <stdio.h>
#define PI 3.14159

int main() 
{
float raio, area;
    printf("Digite o raio do circulo: ");
        scanf("%f", &raio);
    area = PI * raio * raio;
        printf("Area do circulo: %.2f\n", area);
return 0;
}
