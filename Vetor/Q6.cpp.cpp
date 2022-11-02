//Fazer um algoritmo/programa que leia a matricula e o salário dos funcionários de uma empresa 
//(máximo de 100 funcionários). Após a leitura de todos os dados, informe em uma tela limpa os 
//dados lidos e o maior e menor salário dos funcionários. O maior e menor salário deverão ser 
//obtidos, cada um, por uma função. Sabe-se ainda que não existe matrícula repetida na empresa.

#include <stdio.h>
#include <stdlib.h>                
                                  //deveria perguntar primeiro, quantos funcionarios
int main(){                      //a pessoa vai querer ler (primeira coisa do codigo)
    char matricula[50][50];
    float salario[50];
	float menorValor = 999999;
	float maiorValor = 0;

	for (int i = 1; i < 100; i++){
    printf("Digite o Numero da Matricula do %d Empregado: ", i);
    scanf("%s", &matricula[i]);
    printf("Digite o Salario do %d Empregado: ", i);
    scanf("%f", &salario[i]);
	}

	system("clear||cls");

	for (int i = 1; i < 100; i++){
    printf("%s recebe %.2f Reais de Salario\n", matricula[i], salario[i]);
    for (int i = 1; i < 4; i++){
        if (salario[i] < menorValor){
            menorValor = salario[i];}
 		} 
	}
	
	printf("Menor Salario: %.2f\n", menorValor);
	
	for (int i = 0; i < 1006
	7; i++){
    if (salario[i] > maiorValor){
        maiorValor = salario[i];}
	}

	printf("Maior Salario: %.2f\n", maiorValor);

return 0;
}

