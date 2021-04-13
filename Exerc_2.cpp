// Repetição
// Escreve um algoritimo que receba o nome do aluno e repita 5000 x
// Eu "nome do aluno" vou passar am altoritimo com média 10

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[30];
	int i;	
	
	printf("Digite o seu nome: ");
	fgets(nome, 30, stdin);
	fflush(stdin);
	
	autoincremento: i++;
	
	for(i=1;i<=5000;i++){
		printf("%s vai passar em algoritimo com média 10!\n", nome);
	}
	
	return 0;
}
