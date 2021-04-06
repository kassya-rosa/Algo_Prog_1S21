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

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
		
	int ddd;
	
	printf("Informe o DDD: ");
	scanf("%i", &ddd);
	fflush(stdin);
	
	switch(ddd){
		case 61: printf("DDD %i, Brasilia", ddd); break;
		case 71: printf("DDD %i, Salvador", ddd); break;
		case 11: printf("DDD %i, Sao Paulo", ddd); break;
		case 21: printf("DDD %i, Rio de Janeiro", ddd); break;
		case 32: printf("DDD %i, Juiz de Fora", ddd); break;
		case 19: printf("DDD %i, Campinas", ddd); break;
		case 27: printf("DDD %i, Vitoria", ddd); break;
		case 31: printf("DDD %i, Belo Horizonte", ddd); break;
		default: printf("DDD %i, Invalido", ddd);
	}
		
	return 0;
}
