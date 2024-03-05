#include <stdio.h>
int main(){
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d",&num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    if(num1>num2){
        printf("O primeiro número é maior que o segundo!");
    }else if(num2>num1){
        printf("O segundo número é maior que o primeiro!");
    }else{
        printf("Os números são iguais!");
    }
}