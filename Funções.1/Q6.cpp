/*/em que p = 3.1414592 valor do raio r deve ser passado por par�metro.
Escreva uma fun��o que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (�ndice de Massa Corporal) dessa pessoa:*/


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

    printf("Me forneca a altura: ");
    scanf("%f", &altura);

    printf("Me forneca a peso: ");
    scanf("%f", &peso);

    CalculaIMC( peso, altura );
    
}
