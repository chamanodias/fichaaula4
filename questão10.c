#include <stdio.h>

int main() {
    float num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número: ");
    scanf("%f", &num3);

    if (num1 > num2) {
        float temp = num1;
        num1 = num2;
        num2 = temp;
    }
    if (num2 > num3) {
        float temp = num2;
        num2 = num3;
        num3 = temp;
    }
    if (num1 > num2) {
        float temp = num1;
        num1 = num2;
        num2 = temp;
    }

    printf("Os números em ordem crescente são: %.2f, %.2f, %.2f\n", num1, num2, num3);

    return 0;
}
