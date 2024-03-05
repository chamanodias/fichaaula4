#include <stdio.h>

int main() {
    char caractere;


    printf("Digite um caractere: ");
    scanf(" %c", &caractere); 

    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u') {
        printf("%c é uma vogal.\n", caractere);
    }

    else if (caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U') {
        printf("%c é uma vogal.\n", caractere);
    }

    else if ((caractere >= 'a' && caractere <= 'z') || (caractere >= 'A' && caractere <= 'Z')) {
        printf("%c é uma consoante.\n", caractere);
    }

    else {
        printf("%c é um caractere especial.\n", caractere);
    }

    return 0;
}
