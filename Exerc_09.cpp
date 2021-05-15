// Uma pesquisa sobre algumas caracter�sticas f�sicas da popula��o de uma determinada regi�o 
// coletou os seguintes dados, referentes a cada habitante:
// a) sexo (masculino, feminino);
// b) cor dos olhos (azuis, verdes, castanhos, pretos);
// c) cor dos cabelos (loiros, castanhos, pretos);
// d) idade em anos.

// Para indicar fim dos habitantes pesquisados, o usu�rio fornecer� um habitante fict�cio com idade 
// igual a �1. 

// Fazer um algoritmo que determine e escreva:
// a) a maior idade dos habitantes pesquisados;
// b) a porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos inclusive e que tenham olhos verdes e cabelos loiros.

#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, maior_idade, i=1;
	char sexo, cor_olhos[9], cor_cabelos[9];
	float porcentagem, fem_loira_olhos_verdes;
	
	fem_loira_olhos_verdes=0;
	
	printf("Pesquisa sobre os habitantes de Pomerode\n\nResponda as quest�es a seguir e para encerrar informe a idade -1\n");
	
	do{
		printf("\nInforme o sexo da %d� pessoa [F|M]: ", i);
		scanf("%s", &sexo);
		fflush(stdin);
		
		sexo = toupper(sexo);
		
		printf("\nInforme a cor dos olhos da %d� pessoa (azuis, verdes, castanhos, pretos): ", i);
		fgets(cor_olhos, 9, stdin);
		fflush(stdin);
		
		printf("\nInforme a cor dos cabelos da %d� pessoa (loiros, castanhos, pretos): ", i);
		fgets(cor_cabelos, 9, stdin);
		fflush(stdin);
		
		printf("\nInforme a idade da %d� pessoa: ", i);
		scanf("%d", &idade);
		fflush(stdin);
		
		if((idade>=18 || idade <=35) && sexo=='F'&& strcmp(cor_olhos, "verdes")==1 && strcmp(cor_cabelos, "loiros")==1)
			fem_loira_olhos_verdes++;
						
		if(i==1)
			maior_idade = idade;
		if(maior_idade<idade)
			maior_idade = idade;
		
		i++;
	}while(idade>=0);
	
	porcentagem = (fem_loira_olhos_verdes/i)*100;
	

	
	printf("\nA maior idade dos habitantes pesquisados �: %d", maior_idade);
	printf("\nA porcentagem de indiv�duos do sexo feminino cuja idade est� entre 18 e 35 anos inclusive \ne que tenham olhos verdes e cabelos loiros �: %.1f%", porcentagem);
	
	return 0;
}
