// Elabore um algoritmo que apresenta as compras de frutas efetuadas por usuário (quantidade 
// de frutas para cada tipo), sendo elas identificadas por meio de um número.
// 1 => ABACAXI
// 2 => MAÇA
// 3 => PERA
// Usando a instrução faca...enquanto identifique quais as frutas desejadas por seu usuário, 
// le mbrando que ele pode desejar somente um tipo de fruta ou mais que um.
// Deve existir o cuidado na identificação correta das frutas, pois o feirante só possui estes três 
// tipos. Caso o usuário escolha uma fruta não existente deve ser notificado que a fruta não está
// disponível e a solicitação deve ser feita novamente sobre qual fruta ele deseja.

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int fruta;
	char aux;
	
do{	

	printf("Feira da Hora\n\nTemos disponíveis as seguintes frutas:\n\n1 - Abacaxi\n2 - Maçã\n3 - Pera\n\nInforme a fruta desejada: ");
	scanf("%i", &fruta);
	fflush(stdin);
	
	if(fruta == 0){
		printf("Fruta inexistente!");
	}else {
	switch(fruta){
		case 1: printf("Abacaxi", fruta); break;
		case 2: printf("Maçã", fruta); break;
		case 3: printf("Pera", fruta); break;
		default: printf("Fruta inexistente!", fruta);
	}}
	
	do{
		printf("\nDeseja outra fruta ?[s|n]\n");
		scanf("%c", &aux);
		fflush(stdin);
		aux = tolower(aux); //Converte o caractere em minúsculo
		if(aux != 's' && aux != 'n')
				printf("\nOpção inválida!");
	}while(aux != 's' && aux != 'n');
		
}while(aux == 's');

	return 0;
}
