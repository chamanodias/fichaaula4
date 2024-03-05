#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int idade;

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    if (scanf("%d", &idade) != 1 || idade < 0) {
        printf("Idade invalida. digite um valor inteiro positivo.\n");
        exit(1);
    }

    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);

    return 0;
}
