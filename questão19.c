#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 1 && idade <= 12) {
        printf("Você é uma criança.\n");
    } else if (idade >= 13 && idade <= 18) {
        printf("Você é um adolescente!\n");
    } else if (idade > 18) {
        printf("Você é um adulto!\n");
    } else {
        printf("Você é um bebê.\n");
    }
    
    return 0;
}
