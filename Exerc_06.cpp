// Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &num);
	fflush(stdin);
	
	if (num % 2 == 0){
		printf("O n�mero digitado � par.");
	} else {
		printf("O n�mero digitado � �mpar.");
	}
	
	
	return 0;
}
