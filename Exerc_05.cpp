// Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N é 
// fornecido pelo usuário. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...faça

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, fat;
	
	printf("Digite um número inteiro para fatorar: ");
	scanf("%d", &num);
	fflush(stdin);
	
	i=1;
	
	if(num<0){
		printf("Somente números inteiros positivos!");
	} else if(num==0) {
		printf("Fatorial de 0 é: 1");
	} else {
	while(i<= num){
		fat = fat*i;
		i++;
	}}
	
	printf("Fatorial de %d é: %d", num, fat);
	
	return 0;
}
