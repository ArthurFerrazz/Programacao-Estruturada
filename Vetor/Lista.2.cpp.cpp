//Altere o algoritmo anterior considerando que n�o se conhece quantos alunos esta turma tem 
//(menos que 50). O n�mero de aluno ser� informado pelo usu�rio

#include <stdio.h>
                             
int main(){             
    float nota[30];
    int i, alunos;

    do{
        printf("Informe quantos alunos (menos de 50): ");
        scanf("%d", &alunos);

    }
	
	while(alunos > 50);

    for(i=0; i<alunos; i++){
        printf("Informe a nota: ");
        scanf("%f", &nota[i]);
    }
    
	printf("\n");
    
	for(i=0; i<alunos; i++){
        printf("Nota %d: %.1f\n", i+1, nota[i]);
    }


return 0;
}
