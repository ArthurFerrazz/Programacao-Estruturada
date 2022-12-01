/*Construa um programa em C para gerar e imprimir uma matriz de tamanho 10 
x 10, onde seus elementos são da seguinte forma:
A[i][j] = 2*i + 7*j - 2 se i < j;
A[i][j] = 3*i^2 - 1 se i == j;
A[i][j] = 4*i^3 + 5*j^2 + 1 se i > j.*/

#include <stdio.h>

int main (){
    int matrix[10][10], i, j;
    for ( i = 0; i < 10; i++){
    for ( j = 0; j < 10; j++){
     if (i<j){
      matrix[i][j] = 2*i + 7*j - 2;  
 }
    else if (i==j){
      matrix[i][j]= pow(3*i,2) - 1;
 }
    else if (i>j){
      matrix[i][j]= pow(4*i,3) + pow(5*j,2) + 1;
 } 
  }
 }
    for ( i = 0; i < 10; i++){
    for ( j = 0; j < 10; j++){
      printf("%d\t", matrix[i][j]);
 }
      printf("\n");
 }     
 }
