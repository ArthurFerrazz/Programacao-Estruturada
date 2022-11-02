//Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80
//notas, variando de 0 a 10, dos alunos de uma turma (vários alunos). Calcule a frequência de
//cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequências.*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int notas[10],i,j,repeticao[10];

    for ( i = 0; i < 10; i++)
    {
       printf("Me forneca a nota do aluno %d :",i);
       scanf("%d",&notas[i]);
    }
    


    for ( i = 0; i < 10; i++)
    {
        for ( j = 0; j < 10; j++)
        {
            if (notas[i]== notas[j])
            {
                printf("Nota %d igual a notas %d",notas[i],notas[j]);
            }
            
        }
        
        
    }   
    



}
