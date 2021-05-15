// Um mercador quer fazer um aumento em todos os seus produtos de 10%. Faça diferentes 
// algoritmos (um para cada estrutura de repetição) que leia a identificação e o preço de cada 
// produto e calcule e escreva a identificação e o novo preço após o aumento. 
// Considere as seguintes situações:

// a) o mercador informa o número de produtos que possui antes de entrar com o preço 
// dos produtos

// b) o mercador informa produto a produto e você deve perguntar se tem mais algum produto a ser calculado o aumento

// c) o preço do último produto fornecido pelo mercador é -1


// Perguntar para um monitor!

// É para fazer uma estrutura de repetição para cada letra?

#include<stdio.h>
#include<locale.h>
#include<ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char identificacao[20], aux;
	int qtde_produtos,i;
	float preco_atual, novo_preco;	
	
	printf("Informe quantos produtos serão calculados: ");
	scanf("%d", &qtde_produtos);
	fflush(stdin);
	
	for (i=1;i<=qtde_produtos;i++){
		printf("\nInforme a identificação do produto %d: ", i);
		fgets(identificacao, 20, stdin);
		fflush(stdin);
		
		if(i < qtde_produtos){
			printf("\nInforme o preço atual do produto %d: ", i);
			scanf("%f", &preco_atual);
			fflush(stdin);
		
			novo_preco = preco_atual * 1.1;
		
			printf("\nO novo preço do produto %d - %s é: %.2f", i, identificacao, novo_preco);
				
			printf("\nDeseja informar outro produto? [S|N]");
			scanf("%c", &aux);
			fflush(stdin);
		
			aux = toupper(aux);
			
			do {
				if(aux != 'S' && aux!= 'N')
				printf("Opção inválida!");
			}while(aux != 'S' && aux!= 'N');
			
		}else {
			printf("Último produto! Preço é -1.");
		}
		
		if(aux == 'N') {
			i = qtde_produtos;
		}
	}
	
	
	return 0;
}
