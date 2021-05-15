// Elabore um algoritmo que apresenta as compras de frutas efetuadas por usu�rio (quantidade 
// de frutas para cada tipo), sendo elas identificadas por meio de um n�mero.
// 1 => ABACAXI
// 2 => MA�A
// 3 => PERA
// Usando a instru��o faca...enquanto identifique quais as frutas desejadas por seu usu�rio, 
// le mbrando que ele pode desejar somente um tipo de fruta ou mais que um.
// Deve existir o cuidado na identifica��o correta das frutas, pois o feirante s� possui estes tr�s 
// tipos. Caso o usu�rio escolha uma fruta n�o existente deve ser notificado que a fruta n�o est�
// dispon�vel e a solicita��o deve ser feita novamente sobre qual fruta ele deseja.

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	int fruta;
	char aux;
	
do{	

	printf("Feira da Hora\n\nTemos dispon�veis as seguintes frutas:\n\n1 - Abacaxi\n2 - Ma��\n3 - Pera\n\nInforme a fruta desejada: ");
	scanf("%i", &fruta);
	fflush(stdin);
	
	if(fruta == 0){
		printf("Fruta inexistente!");
	}else {
	switch(fruta){
		case 1: printf("Abacaxi", fruta); break;
		case 2: printf("Ma��", fruta); break;
		case 3: printf("Pera", fruta); break;
		default: printf("Fruta inexistente!", fruta);
	}}
	
	do{
		printf("\nDeseja outra fruta ?[s|n]\n");
		scanf("%c", &aux);
		fflush(stdin);
		aux = tolower(aux); //Converte o caractere em min�sculo
		if(aux != 's' && aux != 'n')
				printf("\nOp��o inv�lida!");
	}while(aux != 's' && aux != 'n');
		
}while(aux == 's');

	return 0;
}
