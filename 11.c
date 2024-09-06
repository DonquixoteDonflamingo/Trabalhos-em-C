#include <stdio.h>

int main() {
float nota1, nota2, nota3, nota4;
int peso1, peso2, peso3, peso4;
int metodo;
float media;


    printf("Digite a nota 1: ");
        scanf("%f", &nota1);
    
    printf("Digite a nota 2: ");
        scanf("%f", &nota2);
    
    printf("Digite a nota 3: ");
        scanf("%f", &nota3);
    
    printf("Digite a nota 4: ");
        scanf("%f", &nota4);

    printf("Escolha o metodo de calculo:\n");
        printf("1 - Media Aritmetica Simples\n");
            printf("2 - Media Ponderada\n");
                scanf("%d", &metodo);

    switch (metodo)
    {
        case 1:
            media = (nota1 + nota2 + nota3 + nota4) / 4.0;
                printf("A media aritmetica simples e: %.2f\n", media);
        break;

        case 2:
            // Entrada dos pesos
            printf("Digite o peso da nota 1: ");
                scanf("%d", &peso1);
            
            printf("Digite o peso da nota 2: ");
                scanf("%d", &peso2);
            
            printf("Digite o peso da nota 3: ");
                scanf("%d", &peso3);
            
            printf("Digite o peso da nota 4: ");
                scanf("%d", &peso4);

            // Cálculo da média ponderada
            media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3 + nota4 * peso4) / 
                    (peso1 + peso2 + peso3 + peso4);
            
            printf("A media ponderada e %.2f\n", media);        
        break;

        default: // Opção inválida
            printf("Opção invalida.\n");
        break;
    }

return 0;
}