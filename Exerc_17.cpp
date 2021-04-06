// Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida, 
// então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
// calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	
	int anoNasc, anoAtual, dias;
	
	printf("Informe seu ano de nascimento: ");
	scanf("%i", &anoNasc);
	fflush(stdin);
	
	printf("Informe o ano atual: ");
	scanf("%i", &anoAtual);
	fflush(stdin);
	
	if(anoAtual<anoNasc){
		printf("Idade negativa, inválido!");
		} else if(anoNasc<0 or anoAtual<0){
			printf("O ano atual ou o ano de nascimento não pode ser negativo!");
			} else{	
				dias = ((anoAtual - anoNasc)*365);
				
				printf("Você já viveu %i dias (aprox.) em sua vida", dias);
			}
			
	return 0;
}
