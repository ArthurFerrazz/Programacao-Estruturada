//Fa�a um algoritmo que calcule e escreva o somat�rio dos valores armazenados numa vari�vel 
//composta unidimensional, chamada dados, de at� 100 elementos num�ricos a serem lidos.


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
