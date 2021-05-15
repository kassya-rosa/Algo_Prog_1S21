// Faça um algoritmo que receba o sexo e a nota dos alunos de uma classe e apresente a média 
// das notas dos alunos e a média das notas das alunas. O algoritmo deverá apresentar os 
// resultados solicitados quando for fornecida uma nota negativa

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota,aluno_f, aluno_m, nota_f, nota_m, media_m, media_f;
	int i;
	char sexo, aux;
	
	i=1;
	aluno_f = 0;
	aluno_m = 0;
	nota_f = 0;
	nota_m = 0;
	media_f = 0;
	media_m = 0;
	
	do{
		
	printf("\nDigite o sexo do aluno [F|M] %d: ", i);
	scanf("%c", &sexo);
	fflush(stdin);
	
	sexo = toupper(sexo);
	
		do{
			if (sexo!= 'F'&& sexo != 'M'){
				printf("\nSexo inválido!\nInforme o sexo do aluno [F|M] %d: ", i);
				scanf("%c", &sexo);
				fflush(stdin);
				sexo = toupper(sexo);
		}}while(sexo!= 'F'&& sexo != 'M');
	
	printf("\nDigite a nota do aluno %d: ", i);
	scanf("%f", &nota);
	fflush(stdin);
	
		if(sexo == 'F'){
			aluno_f++;
			nota_f = nota_f + nota;
			}else if(sexo == 'M'){
			aluno_m++;
			nota_m = nota_m + nota;
			}
			
		if(aluno_m ==0)
			media_m = 0;
			else 
			media_m = nota_m/aluno_m;
		
		if(aluno_f ==0)
			media_f = 0;
			else 
			media_f = nota_f/aluno_f;
			
		i++;
			
	}while(nota >=0); 
	
	printf("\nMédia dos alunos: %.2f", media_m);
	printf("\nMédia das alunas: %.2f", media_f);
	
	return 0;
}
