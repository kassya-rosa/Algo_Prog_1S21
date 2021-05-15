// Faça um algoritmo que leia dois números calcule o resultado da multiplicação de um pelo 
// outro sem utilizar a operação de multiplicação (ou seja, utilizando apenas soma)


#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num1, num2, conta;
	
	printf("Digite dois números inteiros: ");
	scanf("%i%i", &num1,&num2);
	
	conta=0;
	
	for(i=1;i<=num1;i++){
		conta = conta + num2;
	}
	
	printf("Resultado: %i", conta);
	
	return 0;
}
