#include <stdio.h>

int main() {
int n, primo = 1;
    
    printf("Digite um numero inteiro: ");
        scanf("%d", &n);
    
for (int i = 2; i <= n / 2; i++) 
{
    if (n % i == 0) 
    {
        primo = 0;
    break;
    }
}
    
if (primo && n > 1) 
{
    printf("%d e primo\n", n);
} else 
{
    printf("%d nao e     primo\n", n);
}
    
return 0;
}
