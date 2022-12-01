//Escreva uma função que receba por parâmetro dois números e retorne o maior deles.

#include <stdio.h>
#include <math.h>

int maior(){
    int n[2], i;
    for ( i = 0; i < 2; i++ ){
    printf("Digite o numero: ");
    scanf("%d",&a[i]);
    }
    if (a[0] > a[1]){
    printf("Esse e o maior numero %d",n[0]);
    }
	else if (a[1] > a[0]){
    printf("Esse e o maior numero %d",n[1]);
    }
	else {
    printf("Numeros iguais");
    }
    
    
    
}
int main (){
    maior();
}
