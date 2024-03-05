#include <stdio.h>

int main() {
    int dia;

    printf("Digite o numero do dia da semana (1 a 7):\n");
    printf("1 - Domingo\n");
    printf("2 - Segunda-feira\n");
    printf("3 - Terca-feira\n");
    printf("4 - Quarta-feira\n");
    printf("5 - Quinta-feira\n");
    printf("6 - Sexta-feira\n");
    printf("7 - Sabado\n");
    scanf("%d", &dia);

    switch(dia) {
        case 1:
            printf("Domingo, é no fim de semana\n");
            break;
        case 2:
            printf("Segunda-feira, é um dia útil\n");
            break;
        case 3:
            printf("Terca-feira, é um dia útil\n");
            break;
        case 4:
            printf("Quarta-feira, é um dia útil\n");
            break;
        case 5:
            printf("Quinta-feira, é um dia útil\n");
            break;
        case 6:
            printf("Sexta-feira, é um dia útil\n");
            break;
        case 7:
            printf("Sabado, é no fim de semana\n");
            break;
        default:
            printf("Numero de dia invalido.\n");
    }

    return 0;
}
