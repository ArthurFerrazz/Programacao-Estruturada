/*Crie um programa em C que leia os elementos de uma matriz inteira 4 x 6 e
imprima todos os elementos, exceto os elementos da diagonal principal.*/

#include <stdio.h>
#include <math.h>

int main(){
    int num[6][6],i,j;
    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
           printf("Me forneça o numero a ser armazenado em [%d] [%d] :", i,j);
           scanf("%d",&num[i][j]);
        }
        
    }
     for ( i = 1; i < 6; i++)
    {
        for (  j= 0; j < 6; j++)
        {
            printf("%d\n",num[i][j]);
        }
        
    }
}
