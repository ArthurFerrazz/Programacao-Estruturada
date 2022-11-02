//Faça um algoritmo que calcule e escreva o somatório dos valores armazenados numa variável 
//composta unidimensional, chamada dados, de até 100 elementos numéricos a serem lidos.


#include <stdio.h>

int main(){
	int dados[100];
	int quant;
	int soma = 0;
	int i;

    do{
        printf("Informe a quantidade de valores: ");
        scanf("%d", &quant);
    }
	
	while(quant > 100);

    printf("\n");

    for(i=0; i<quant; i++){
        printf("Informe o valor: ");
        scanf("%d", &dados[i]);
    }

    printf("\n");

    for(i=0; i<quant; i++){
        soma = soma + dados[i];
    }

    printf("Soma dos dados: %d", soma);

    printf("\n");

return 0;
}
