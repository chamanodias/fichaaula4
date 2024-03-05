#include <stdio.h>
int main(){
    int num; 
    printf("Digite um número: ");
    scanf("%d", &num);
    if (num % 3 == 0 && num % 5 == 0){
        printf("O número é divísivel por 3 e por 5");
    }else{
        printf("O número não é divisível por 3 e por 5");
    }
}