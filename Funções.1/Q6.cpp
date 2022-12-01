/*/em que p = 3.1414592 valor do raio r deve ser passado por parâmetro.
Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (Índice de Massa Corporal) dessa pessoa:*/


#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int CalculaIMC (float peso, float altura){
float imc;

imc = peso/ pow( altura, 2);

printf("Volume: %.2f", imc);
}

int main (){
    float altura, peso;

    printf("DIgite a altura: ");
    scanf("%f", &altura);

    printf("Digite o peso: ");
    scanf("%f", &peso);

    CalculaIMC( peso, altura );
    
}
