#include <stdio.h>

void exibirHistograma(int t[], int dias)
{
    for (int i = 0; i < dias; i++) 
    {
        printf("Dia %d: ", i + 1);
        for (int j = 0; j < t[i]; j++) 
        {
            printf("*");
        }
    printf("\n");
    }
}

int main() 
{
int temperaturas[7] = {19, 21, 25, 22, 20, 17, 15};
    exibirHistograma(temperaturas, 7);
return 0;
}
