#include <stdio.h> 
int main(){
    float salario, novosalario;
    printf("Digite o valor do seu salário: ");
    scanf("%f", &salario);
    if(salario>=1500){
        novosalario = salario*0.10 + salario;
        printf("Seu novo salário é de %f", novosalario);
    }else{
        novosalario = salario*0.15 + salario;
        printf("Seu novo salário é de %f", novosalario);
    }
}