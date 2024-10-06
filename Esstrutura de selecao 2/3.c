#include <stdio.h>

int main() {
int n = 200000;
double pi = 0.0;
    
for (int i = 0; i < n; i++) 
{
    if (i % 2 == 0) 
    {
        pi += 4.0 / (2 * i + 1);
    } 
    else 
    {
        pi -= 4.0 / (2 * i + 1);
    }
    if (i < 1000) 
    {
        printf("Aproximacao %d: %.15f\n", i, pi);
    }
}
    printf("Valor aproximado de Pi: %.15f\n", pi);
return 0;
}
