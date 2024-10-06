#include <stdio.h>
#define ABS(n) ((n) >= 0 ? (n) : -(n))

int main() 
{
int num;
    printf("Digite um numero: ");
        scanf("%d", &num);
            printf("O valor absoluto de %d e %d\n", num, ABS(num));
return 0;
}
