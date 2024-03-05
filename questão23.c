#include<stdio.h>
int main(){
    float metros, cent, mili, km;

    printf("digite a distância em metros: ");
    scanf("%f", &metros);
    cent = metros * 100;
    mili = cent * 100;
    km = metros/1000;

    printf("A distância em centímetros: %f\n", cent);
    printf("A distância em milimetros: %f\n", mili);
    printf("Distância em quilômetros: %f\n", km);
}