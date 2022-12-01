/*Faça um programa em C que leia uma matriz 10 x 3 com as notas de 10 
alunos em 3 disciplinas. Em seguida, calcule e escreva o número de alunos 
cuja pior nota foi na disciplina 1, o número de alunos cuja pior nota foi na
disciplina 2, e o número de alunos cuja a pior nota foi na disciplina 3. Em caso 
de empate das piores notas de um aluno, o critério de desempate é arbitrário, 
mas o aluno deve ser contabilizado apenas uma vez.*/

#include <stdio.h>
#include <math.h>

int main(){
    int matrix[10][3], pior = 100,piorNota[3], aluno[3], materia[3], i, j;
    for ( i = 0; i < 10; i++){
    for ( j = 0; j < 3; j++){
         printf("Digite a nota %d do aluno %d (%d,%d): ",j,i,i,j);
         scanf("%d", &matrix[i][j]);
    }
    }
    
    for ( j = 0; j < 3; j++){
         pior = 100;
    for ( i = 0; i < 10; i++){
    if (matrix[i][j] < pior){
        pior = matrix[i][j];
        piorNota[j]=matrix[i][j];
        aluno[j]=i;
        materia[j]=j;
    }
     }
    }
    
    for ( i = 0; i < 3; i++){
        printf("Pior aluno da matéria %d foi %d com %d\n", i, aluno[i], piorNota[i]);
    } 
}
