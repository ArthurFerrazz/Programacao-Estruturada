//Uma grande empresa deseja saber quais os três empregados mais recentes. Fazer um algoritmo 
//para ler um número indeterminado de informações (máximo de 50) contendo a matrícula 
//funcional do empregado e o número de meses de trabalho deste empregado. Mostre os três
//empregados mais recentes. Não existem dois empregados admitidos no mesmo mês e a 
//matrícula igual a zero ‘0’ encerra a leitura. 

#include <stdio.h>
#include <stdlib.h>

int main(){
    int c,i;
    printf("Quantos funcionarios sao ?");
    scanf("%d",&c);
    int meses[c],matricula[c],recente[3],mvelho;
    for ( i = 0; i < c; i++)
    {
        //printf("Qual a matricula do funcianrio %d:",i);
        //scanf("%d",&matricula[i]);
         if (matricula[i] == 0)
        {
            break;
        }
        printf("E quantos meses o funcionario %d trabalha :",i);
        scanf("%d",&meses[i]);
    }
    for ( i = 0; i < c; i++)
    {
        if (meses[i] > mvelho)
        {
            mvelho=meses[i];
        }   
    }
    for ( i = 0; i < c; i++)
    {
        if (meses[i] <= mvelho)
        {
            mvelho=meses[i];
            recente[i]=meses[i];
        }
        
    }
    for ( i = 0; i < c; i++)
    {
        if ( meses[i]== recente[i])
        {
            printf("Funcionario mais recente e %d com %d meses\n",i,recente[i]);
        }
        
    }
    
}

