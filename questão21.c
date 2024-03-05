#include <stdio.h>

int main() {
    float num1, num2, soma, sub, multi, div;
    int opera;

    printf("Digite o primeiro número:  ");
    scanf("%f", &num1); 

    printf("Digite o segundo número: ");
    scanf("%f", &num2); 

    printf("Escolha a operação desejada: \n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &opera); 

    switch(opera) {
        case 1: 
            soma = num1 + num2;
            printf("Soma: %.2f\n", soma);
            break;
        case 2: 
            sub = num1 - num2;
            printf("Subtração: %.2f\n", sub);
            break;
        case 3: 
            multi = num1 * num2;
            printf("Multiplicação: %.2f\n", multi);
            break;
        case 4: 
            if (num2 != 0) {
                div = num1 / num2;
                printf("Divisão: %.2f\n", div);
            } else {
                printf("Não é possível dividir por zero.\n");
            }
            break;
        default: 
            printf("Operação inválida.\n");
            break;
    }
    
    return 0;
}
