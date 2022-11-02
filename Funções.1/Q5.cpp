/*Escreva uma função para o cálculo do volume de uma esfera*/

#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int volume(float raio){
float volume;

	volume = 4/((3 * PI) * pow(raio, 3));
	printf("Volume: %.2f",volume);
}
int main (){
    float raio;
    
    printf("Me forneca o raio:");
    scanf("%f",&raio);
    volume(raio);
}
