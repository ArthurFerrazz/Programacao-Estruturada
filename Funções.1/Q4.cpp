/*Escreva uma fun��o que receba por par�metro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindro circular � calculado por meio da
seguinte f�rmula:                                                  sabendo que p = 3.1414592*/

#include <stdio.h>
#include <math.h>
#define PI 3.1414592

int volume( float altura,float raio ){
float volume;
	volume = PI * pow(raio,2)*altura;
	printf("Volume: %.2f",volume);
}

int main (){
    float altura ,raio;
    printf("Me forneca a altura: ");
    scanf("%f",&altura);
    
    printf("Me forneca a raio: ");
    scanf("%f",&raio);
    volume(altura,raio);
}
