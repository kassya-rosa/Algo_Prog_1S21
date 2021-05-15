// Um mercador quer fazer um aumento em todos os seus produtos de 10%. Fa�a diferentes 
// algoritmos (um para cada estrutura de repeti��o) que leia a identifica��o e o pre�o de cada 
// produto e calcule e escreva a identifica��o e o novo pre�o ap�s o aumento. 
// Considere as seguintes situa��es:

// a) o mercador informa o n�mero de produtos que possui antes de entrar com o pre�o 
// dos produtos

// b) o mercador informa produto a produto e voc� deve perguntar se tem mais algum produto a ser calculado o aumento

// c) o pre�o do �ltimo produto fornecido pelo mercador � -1


// Perguntar para um monitor!

// � para fazer uma estrutura de repeti��o para cada letra?

#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char identificacao[20], aux;
	int qtde_produtos,i;
	float preco_atual, novo_preco;	
	
	printf("Informe quantos produtos ser�o calculados: ");
	scanf("%d", &qtde_produtos);
	fflush(stdin);
	
	for (i=1;i<=qtde_produtos;i++){
		printf("\nInforme a identifica��o do produto %d: ", i);
		fgets(identificacao, 20, stdin);
		fflush(stdin);
		
		if(i < qtde_produtos){
			printf("\nInforme o pre�o atual do produto %d: ", i);
			scanf("%f", &preco_atual);
			fflush(stdin);
		
			novo_preco = preco_atual * 1.1;
		
			printf("\nO novo pre�o do produto %d - %s �: %.2f", i, identificacao, novo_preco);
				
			printf("\nDeseja informar outro produto? [S|N]");
			scanf("%c", &aux);
			fflush(stdin);
		
			aux = toupper(aux);
			
			do {
				if(aux != 'S' && aux!= 'N')
				printf("Op��o inv�lida!");
			}while(aux != 'S' && aux!= 'N');
			
		}else {
			printf("�ltimo produto! Pre�o � -1.");
		}
		
		if(aux == 'N') {
			i = qtde_produtos;
		}
	}
	
	
	return 0;
}
