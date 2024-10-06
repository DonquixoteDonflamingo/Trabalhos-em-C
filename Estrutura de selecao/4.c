#include <stdio.h>

int main()
{
int num1, num2;

    printf("Digite dois numeros: ");
        scanf("%d %d", &num1, &num2);

if (num1 > num2)
{
    printf("O maior numero e: %d\n", num1);
}
else
{
    printf("O maior numero e: %d\n", num2);
}

return 0;
}
