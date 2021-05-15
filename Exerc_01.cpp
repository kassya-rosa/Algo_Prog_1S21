// Construa um algoritmo que calcule o fatorial de um número usando a estrutura PARA...FAÇA, 
// baseando-se na definição matemática (N! = 1x2x3x...x N-1 x N e 0! = 1 por definição)

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, conta, i;
		
	printf("Insira o número que deseja fatorar: \n");
	scanf("%i", &num);
	
	conta=1;
		
	if(num<0){
		printf("Somente números inteiros positivos!");
	} else if(num==0) {
		printf("Resultado: 1");
	} else {
		for(i=1;i<=num;i++){
			conta = conta*i;
		}
		printf("Resultado: %i", conta);
	}
	return 0;
}
