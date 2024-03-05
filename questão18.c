#include <stdio.h>
#include <math.h>

int main() {
    double numerodec;
    
    printf("Digite um numero decimal: ");
    scanf("%lf", &numerodec);
    
    int numeroround = round(numerodec);
    
    printf("Numero inteiro mais proximo: %d\n", numeroround);
    
    return 0;
}
