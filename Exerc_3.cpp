// Média de 50 numeros

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num, soma, media;
	int i;	
	
	soma = 0;
	
	for(i=1;i<=5;i++){
		printf("Digite o valor: \n", i);
		scanf("%f", &num);
		
		soma = soma + num;
		
		printf("soma = %.0f\n", i, soma);
	}
	
	media = soma/i;
	
	printf("Média = %.0f", media);
	
	return 0;
}
