// Você foi escolhido para fazer um algoritmo para informar o vencedor de um concurso de 
// piadas. Estarão concorrendo ao prêmio 3 finalistas, cujos nomes serão fornecidos.
 
// A quantidade de juízes será definida no dia da apuração e para cada juiz o algoritmo solicitará a 
// nota para cada candidato. A nota poderá variar de 0 (zero) a 100(cem). 

// O algoritmo deverá apresentar o nome e o total de pontos de cada concorrente e o nome e total de pontos do 
// vencedor após o voto de todos os juízes.

#include<stdio.h>
#include<string.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome_finalista1[60], nome_finalista2[60], nome_finalista3[60], vencedor[60];
	int i, qtde_juizes, nota, nota1=0, nota2=0, nota3=0, maior_nota;
	
	printf("13º Concurso de piadas ruins da Manhattan do Cerrado\n\nInforme a quantidade de juízes do dia: \n");
	scanf("%d", &qtde_juizes);
	fflush(stdin);
	
	printf("Digite o nome do primeiro finalista:  ");
	fgets(nome_finalista1, 60, stdin);
	fflush(stdin);
	
	printf("Digite o nome do segundo finalista:  ");
	fgets(nome_finalista2, 60, stdin);
	fflush(stdin);
	
	printf("Digite o nome do terceiro finalista:  ");
	fgets(nome_finalista3, 60, stdin);
	fflush(stdin);
	
	i=1;
		do{
			printf("\n%dº juiz, favor informar a nota do %s: ", i, nome_finalista1);
			scanf("%d", &nota);
			fflush(stdin);
			
			do{
				if(nota<0 || nota>100){
					printf("Nota inválida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 || nota>100);
			
			nota1= nota1 + nota;
			
			printf("\n%dº juiz, favor informar a nota do %s: ", i, nome_finalista2);
			scanf("%d", &nota);
			fflush(stdin);
			
			do{
				if(nota<0 || nota>100){
					printf("Nota inválida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 || nota>100);
			
			nota2= nota2 + nota;
			
			printf("\n%dº juiz, favor informar a nota do %s: ", i, nome_finalista3);
			scanf("%d", &nota);
			fflush(stdin);
			
			do{
				if(nota<0 || nota>100){
					printf("Nota inválida! Favor informar nota entre 0 e 100: ");
					scanf("%d", &nota);
					fflush(stdin);
				}
			}while(nota<0 || nota>100);
			
			nota3= nota3 + nota;
						
			i++;
						
		}while(i<=qtde_juizes);
	
			if(nota3>nota2 && nota3>nota1){
				strcpy(vencedor, nome_finalista3);
				maior_nota = nota3;
				} else if(nota2>nota3 && nota2>nota1){
					strcpy(vencedor, nome_finalista2);
					maior_nota = nota2;
					} else if(nota1>nota2 && nota1>nota3){
						strcpy(vencedor, nome_finalista1);
						maior_nota = nota1;
						}
					
			printf("\nNota do finalista 1 - %s: %d\n", nome_finalista1,nota1);
			printf("\nNota do finalista 2 - %s: %d\n", nome_finalista2,nota2);
			printf("\nNota do finalista 3 - %s: %d\n", nome_finalista3,nota3);
			printf("\n\nO vencedor do 13º concurso de piadas ruins da Manhattan do Cerrado é:\n\n%s\nCom o total de pontos: %d", vencedor, maior_nota);			
	
	return 0;
}
