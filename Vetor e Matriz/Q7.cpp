/*Crie um programa em C que leia uma matriz 3 x 3 elementos, calcule a soma 
dos elementos que estão na diagonal principal, abaixo da diagonal principal e 
acima da diagonal principal, ao final mostre os três resultados obtidos.*/

#include <stdio.h>
#include <math.h>


int main (){
int matris[3][3], col1=0, col2=0, col3=0, i, j;
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
         printf ("Digite o valor da matrix na posicao %d %d", i,j);
         scanf("%d", &matris[i][j]);
 }
   }
    for ( i = 0; i < 3; i++){
    for ( j = 0; j < 3; j++){
         printf("%d\t", matris[i][j]);
 }
         printf("\n");
 }
    for ( i = 0; i < 3; i++){
        col1 = col1 + matris[i][i];
        printf("%d", col1);
 }
    for ( i = 0; i < 2; i++){
         col2 = col2 + matris[i][i+1]; 
 }
    for ( i = 0; i < 2; i++){ 
         col3 = col3 + matris[i+1][i];
 }
         printf("O Valor da diagonal principal e=%d\nO valor da diagonal superior e=%d\nE o valor da diagonal inferior e=%d ",col1, col2, col3);
    
}

