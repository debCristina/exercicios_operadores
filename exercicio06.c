#include<stdio.h>
#include<math.h>
main(){

    //6. Escreva um programa que pergunte qual o raio de um círculo e imprima a sua área. 

    //declarar as variaveis
    float raio, area;

    //receber os dados
    printf("Raio:");
    scanf("%f", &raio);

    //calculo da area
    area = pow(raio, 2) * 3.14;

    //saida de dados
    printf("\nArea do circulo: %.2f", area);


}

