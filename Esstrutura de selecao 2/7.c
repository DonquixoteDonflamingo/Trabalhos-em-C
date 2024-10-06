#include <stdio.h>

int main() {
int n, a = 1, b = 1, fib = 1;
    
    printf("Digite o valor de n (n ≥ 3): ");
        scanf("%d", &n);
    
for (int i = 3; i <= n; i++) 
{
    fib = a + b;
    a = b;
    b = fib;
}
    
    printf("O %d-esimo termo da serie de Fibonacci e: %d\n", n, fib);
return 0;
}
