#include <stdio.h>

int main(){
    int number;
    prtintf("Digite um número inteiro: ");
    scanf("%d", &number);

    if(number >10){
        printf("O valor é maior que 10\n");
    } else if(number == 10){
        printf("o número é igual 10\n");
    } else{
        printf("O valor é menor que 10\n");
    }
    return 0;
}