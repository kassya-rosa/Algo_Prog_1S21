// Fa�a um algoritmo que leia dois n�meros calcule o resultado da multiplica��o de um pelo 
// outro sem utilizar a opera��o de multiplica��o (ou seja, utilizando apenas soma)


#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, num1, num2, conta;
	
	printf("Digite dois n�meros inteiros: ");
	scanf("%i%i", &num1,&num2);
	
	conta=0;
	
	for(i=1;i<=num1;i++){
		conta = conta + num2;
	}
	
	printf("Resultado: %i", conta);
	
	return 0;
}
