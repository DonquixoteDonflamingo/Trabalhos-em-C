#include <stdio.h>
#define MULTIPLO(a, b) ((a) % (b) == 0)

int main() 
{
int a, b;
    printf("Digite dois numeros: ");
        scanf("%d %d", &a, &b);
if (MULTIPLO(a, b)) 
{
    printf("%d e multiplo de %d\n", a, b);
} 
else
{
    printf("%d nao e multiplo de %d\n", a, b);
}

return 0;
}
