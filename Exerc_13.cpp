//Fa�a um algoritmo em portugu�s estruturado que leia o n�mero de DDD e informe a qual 
//cidade pertence, considerando s� os seguintes valores:
//61 - Bras�lia
//71 - Salvador
//11 - S�o Paulo
//21 - Rio de Janeiro
//32 - Juiz de Fora
//19 - Campinas
//27 - Vit�ria
//31 - Belo Horizonte
//qualquer outro - uma cidade no Brasil sem identifica��o

#include<stdio.h> // comandos de entrada e sa�da (printf e scanf)
#include<locale.h> // Aceitar pontua��o em portugu�s

int main(){
	setlocale(LC_ALL, "Portuguese"); // Escolhe a biblioteca de pontua��o em portugu�s
	
	int ddd;
	
	printf("Informe o DDD: "); // Imprime mensagem ao usu�rio
	scanf("%i", &ddd);// L� as informa��es digitadas
	fflush(stdin);// Apaga mem�ria
	
	// ddd 13
	
	switch(ddd){
		case 61: printf("DDD %i, Brasilia", ddd); break; // Diferente de 61, continua;
		case 71: printf("DDD %i, Salvador", ddd); break; // Diferente de 71, continua;
		case 11: printf("DDD %i, Sao Paulo", ddd); break; // Diferente de 11, continua;
		case 21: printf("DDD %i, Rio de Janeiro", ddd); break; // Diferente de 21, continua;
		case 32: printf("DDD %i, Juiz de Fora", ddd); break; // Diferente de 32, continua;
		case 19: printf("DDD %i, Campinas", ddd); break; // Diferente de 19, continua;
		case 27: printf("DDD %i, Vitoria", ddd); break; // Diferente de 27, continua;
		case 31: printf("DDD %i, Belo Horizonte", ddd); break; // Diferente de 31, continua;
		default: printf("DDD %i, Invalido", ddd); // Diferente de todos acima, informa a frase "DDD 13, invalido".
	}
	
	// Encerra switch
		
	return 0;
}
