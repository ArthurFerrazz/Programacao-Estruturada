//Fa�a um algoritmo que leia um vetor de at� 80 elementos. Ap�s a leitura de todos os dados, leia 
//um n�mero e verifique se existem elementos no vetor iguais ao n�mero lido. Se existirem, 
//escrever, em uma tela limpa, quantas vezes eles aparecem e quais as posi��es em que eles est�o 
//armazenados no vetor.


#include <stdio.h>

int main(){
    int numero[80];
	int i;
	int j;
	int cont=0;
	int tam;

    do{
        printf("Informe o tamanho do vetor: ");
        scanf("%d", &tam);
    }
	
	while(tam > 80);

    printf("\n");

    for(i=0; i<tam; i++){
        printf("Informe o numero: ");
        scanf("%d", &numero[i]);
    }

    printf("\n");

    printf("Informe um numero que deseja buscar: ");
    scanf("%d", &j);

    printf("\n");

    for(i=0; i<tam; i++){
        if(numero[i] == j){
            cont++;
        }

    }

    printf("Apareceram %d numeros iguais ao informado", cont);

return 0;
}
