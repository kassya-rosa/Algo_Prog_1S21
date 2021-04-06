//  Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída 
// uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo 
// feminino, acrescentando o nome em seguida.

#include<stdio.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[25];
	char sexo;
	int fem, masc;
	
	printf("Digite o nome: ");
	fgets(nome, 25, stdin); // como fgets consegue colocar espaço entre os caracteres
	fflush(stdin);
	
	printf("Digite o sexo (F/M): ");
	scanf("%c", &sexo);
	fflush(stdin);
		
	if (toupper(sexo)=='F'){
		printf("Ilma Sra. %s\n", nome);}
		else if (toupper(sexo)=='M') {
			printf("Ilmo Sr. %s\n", nome);}
			else {printf("Valor digitado: %c.\nInformação de sexo inválida!", sexo);
	}
	
	return 0;
}
