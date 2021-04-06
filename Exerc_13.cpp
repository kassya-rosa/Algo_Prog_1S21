//Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual 
//cidade pertence, considerando só os seguintes valores:
//61 - Brasília
//71 - Salvador
//11 - São Paulo
//21 - Rio de Janeiro
//32 - Juiz de Fora
//19 - Campinas
//27 - Vitória
//31 - Belo Horizonte
//qualquer outro - uma cidade no Brasil sem identificação

#include<stdio.h> // comandos de entrada e saída (printf e scanf)
#include<locale.h> // Aceitar pontuação em português

int main(){
	setlocale(LC_ALL, "Portuguese"); // Escolhe a biblioteca de pontuação em português
	
	int ddd;
	
	printf("Informe o DDD: "); // Imprime mensagem ao usuário
	scanf("%i", &ddd);// Lê as informações digitadas
	fflush(stdin);// Apaga memória
	
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
