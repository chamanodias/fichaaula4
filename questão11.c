#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("IMC: %.2f - Abaixo do peso\n", imc);
    } else if (imc >= 18.5 && imc < 25) {
        printf("IMC: %.2f - Peso normal\n", imc);
    } else if (imc >= 25 && imc < 30) {
        printf("IMC: %.2f - Sobrepeso\n", imc);
    } else if (imc >= 30 && imc < 35) {
        printf("IMC: %.2f - Obeso\n", imc);
    } else {
        printf("IMC: %.2f - Muito obeso\n", imc);
    }

    return 0;
}
