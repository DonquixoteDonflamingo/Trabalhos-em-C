#include <stdio.h>
#define QUAD(n) ((n) * (n))

int main() 
{
int num;
    printf("Digite um numero: ");
        scanf("%d", &num);
            printf("O quadrado de %d e %d\n", num, QUAD(num));
return 0;
}
