//Desenvolva um algoritmo que cadastre os pre�os de at� 100 diferentes CDs em uma loja. Ap�s 
//este cadastro, o algoritmo dever� possibilitar a execu��o de uma de duas fun��es para aumento 
//dos pre�os cadastrados, sendo a primeira de 10% para todos os CDs, enquanto a segunda 
//aumenta o percentual informado pelo vendedor para todos os CDs. Ser� o vendedor que 
//escolher� o tipo de aumento desejado. Ap�s os c�lculos dever� ser apresentado o percentual de 
//aumento e, para cada CD, o valor sem aumento e o valor com aumento.

#include <stdio.h>
#include <stdlib.h>     

int main() {                                         //corrigir para colocar AT� 100 CD'S
	double cd[5], cd10[5], cdx[5], porcentagem;    //est� lendo apenas 5
	int i;
	 
	for(i=0;i<5;i++) {
	 	printf("Digite o valor do CD: ");
	 	scanf("%lf", &cd[i]);
	}
	 
	for(i=0;i<5;i++){
		cd10[i] = cd[i] + cd[i] * 0.10;
	}
	for(i=0;i<5;i++) {
		printf("Esse e o valor com juros:\n %.2lf\n", cd10[i]);

	}
	
	printf("Vendedor, digite a procentagem que voce deseja acrescentar: ");
	scanf("%lf", &porcentagem);

	for(i=0;i<5;i++){
		cdx[i] = cd[i] + cd[i] * (porcentagem/100);
	}	
	
	for(i=0;i<5;i++) {
		printf("\nEsse e o valor com acrescimo de %.2lf:\n %.2lf", porcentagem, cdx[i]);
	}
	 
return 0;
}
