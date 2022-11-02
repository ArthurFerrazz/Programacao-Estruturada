//Faça um algoritmo que leia até 30 letras e as escreva na ordem inversa (ou contrária) da que 
//foram lidas.

#include <stdio.h>

int main(){                   //esta lendo 30 letras, precisa concertar para que pergunte
	char letras[30];         //quantas letras a pessoa quer ler, pra nao ser sempre 30...
	char i;
	
	for(i=0; i<30; i++){
		printf("Digite a Letra: ");
		scanf("%s", &letras[i]);
	}
	
	printf("\nORDEM INVERSA: ");
	
	for(i=29; i>=0; i--){
		printf("%c ", letras[i]);
	}

return 0;
}
