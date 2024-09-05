#include <stdio.h>

int main() {
int horaInicio, minInicio, horaFim, minFim;
int duracaoHoras, duracaoMinutos;
int totalInicio, totalFim, totalDuracao;

// Recebe a hora de início // NÃO COLOQUE UM HORARIO OU MINUTO MAIOR QUE 60!
    printf("Digite a hora e o minuto de inicio do jogo (HH MM): ");
        scanf("%d %d", &horaInicio, &minInicio);

// Recebe a hora que vai terminar // NÃO COLOQUE UM HORARIO OU MINUTO MAIOR QUE 60!
    printf("Digite a hora e o minuto de término do jogo (HH MM): ");
    scanf("%d %d", &horaFim, &minFim);

// Converter horas em minutos
    totalInicio = horaInicio * 60 + minInicio;
    totalFim = horaFim * 60 + minFim;

// Calcular a duração em minutos
    switch (totalInicio <= totalFim)
    {
        case 1: // Jogo no mesmo dia
            totalDuracao = totalFim - totalInicio;
        break;

        case 0: // Jogo termina no dia seguinte
            totalDuracao = (24 * 60 - totalInicio) + totalFim;
        break;
    }

    // Converte a duração total de minutos pra horas
    duracaoHoras = totalDuracao / 60;
    duracaoMinutos = totalDuracao % 60;

    // resultado
    printf("A duracao do jogo e de %d horas e %d minutos.\n", duracaoHoras, duracaoMinutos);

return 0;
}