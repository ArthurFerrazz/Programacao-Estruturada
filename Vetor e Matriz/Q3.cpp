/*Fa�a um programa em C para ler 10 n�meros DIFERENTES a serem 
armazenados em um vetor. Os dados dever�o ser armazenados no vetor na 
ordem que forem sendo lidos, sendo que caso o usu�rio digite um n�mero que 
j� foi digitado anteriormente, o programa dever� pedir para ele digitar outro 
n�mero. Note que cada valor digitado pelo usu�rio deve ser pesquisado no 
vetor, verificando se ele existe entre os n�meros que j� foram fornecidos. Exibir 
na tela o vetor final que foi digitado.*/

#include <stdio.h>
#include <math.h>

int main (){
    int num[10],i,a,j;
    for ( i = 0; i < 10; i++)
    {
       printf("Me forneca o numero %d :",i);
       scanf("%d",&num[i]);
       a=num[i];
       for ( j = 0; j < 10; j++)
        {
            if (a == num[j])
            {
                printf("Me forneca outro numero pois o numero %d ja existe :",num[j]);
                scanf("%d",&num[j]);
                
            }
            
        }
    
    }
}

