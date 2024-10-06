#include <stdio.h>
#include <math.h>

int fatorial(int n)
{
    if (n == 0) return 1;
int fat = 1;
    for (int i = 1; i <= n; i++) 
    {
        fat *= i;
    }
return fat;
}

int main() 
{
double x, cosx = 0;
int termos = 10;
    
    printf("Digite o valor de x (em radianos): ");
        scanf("%lf", &x);
    
for (int n = 0; n < termos; n++) 
{
    cosx += pow(-1, n) * pow(x, 2 * n) / fatorial(2 * n);
}
    
    printf("Aproximacao de cos(%.2lf): %lf\n", x, cosx);
return 0;
}
