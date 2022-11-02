//Faça um algoritmo que leia a idade de até 100 pessoas e apresente a média entre todas, além 
//de identificar a mais velha e a posição em que ela se encontra no vetor. A idade mais velha 
//pode aparecer em mais de uma posição.

#include <stdio.h>

int main(){                                   
    int idade[10], index_velha[10];                
    int i, mais_velha, cont_velha, tot_idade = 0; 
	cont_velha = 0;

    for(i = 0; i < 10; i++){
        printf("Digite a %d idade: ", i);
        scanf("%d", &idade[i]);

        tot_idade += idade[i];
  
        if(i == 0){
            mais_velha = idade[i];
        }

        else if (idade[i] >= mais_velha){
            mais_velha = idade[i]; 
        }

    }

    printf("Total : %d\n", tot_idade);
    printf("A media foi: %d\n", (tot_idade / 10));
    printf("A idade mais velha foi: %d e aparece no: ", mais_velha);
 
    for(i = 0; i < 10; i++){ 
        if(mais_velha == idade[i]){
            index_velha[cont_velha] = i;
            cont_velha++;
            printf("\n\t %d", i);            
        }
    }
}
