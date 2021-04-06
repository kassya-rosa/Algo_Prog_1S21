// Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida, 
// ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois 
// calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa

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
		printf("Idade negativa, inv�lido!");
		} else if(anoNasc<0 or anoAtual<0){
			printf("O ano atual ou o ano de nascimento n�o pode ser negativo!");
			} else{	
				dias = ((anoAtual - anoNasc)*365);
				
				printf("Voc� j� viveu %i dias (aprox.) em sua vida", dias);
			}
			
	return 0;
}
