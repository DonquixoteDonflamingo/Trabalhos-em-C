#include <stdio.h>

void retangulo(int m, int n) 
{
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            printf("* ");
        }
    printf("\n");
    }
}

int main() 
{
int m, n;
    printf("Digite a altura e a largura do retangulo: ");
        scanf("%d %d", &m, &n);
            retangulo(m, n);
return 0;
}
