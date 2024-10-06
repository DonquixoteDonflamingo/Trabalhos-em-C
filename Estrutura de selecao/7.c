#include <stdio.h>

int main() {
int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Digite a primeira data (dia, mes, ano): ");
        scanf("%d %d %d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dia, mes, ano): ");
        scanf("%d %d %d", &dia2, &mes2, &ano2);

if (ano1 > ano2 || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2)) 
{
    printf("A data %d/%d/%d e a maior\n", dia1, mes1, ano1);    
} else 
{
    printf("A data %d/%d/%d e a maior\n", dia2, mes2, ano2);
}

return 0;
}
