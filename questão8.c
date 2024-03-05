#include <stdio.h>
#include <string.h>

int main() {
    char nome1[100], nome2[100];

    printf("Digite o primeiro nome: ");
    scanf("%s", nome1);

    printf("Digite o segundo nome: ");
    scanf("%s", nome2);

    int len1 = strlen(nome1);
    int len2 = strlen(nome2);

    if (len1 > len2) {
        printf("O primeiro nome é maior que o segundo.\n");
    } else if (len2 > len1) {
        printf("O segundo nome é maior que o primeiro.\n");
    } else {
        printf("Os dois nomes têm o mesmo número de caracteres.\n");
    }

    return 0;
}
