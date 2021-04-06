// Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%i", &num);
	fflush(stdin);
	
	if (num % 2 == 0){
		printf("O número digitado é par.");
	} else {
		printf("O número digitado é ímpar.");
	}
	
	
	return 0;
}
