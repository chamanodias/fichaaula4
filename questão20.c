#include <stdio.h>
int main(){
    int num;
    printf("Digite 1 para solteiro\n, 2 para casado\n, 3 para divorciado\n e 4 para viúvo");
    scanf("%d", &num);
    switch(num){
        case 1: printf("Solteiro(a)");
        break;

        case 2: printf("Casado");
        break;

        case 3: printf("Divorciado");
        break;

        case 4: printf("Viúvo");
        break;

        default: printf("Inválido");
        break;
    }

    
}