// Elabore um algoritmo para calcular N! (fatorial de N) sendo que o valor inteiro de N � 
// fornecido pelo usu�rio. Sabe-se que: N! = 1x2x...x N-1 x N e 0! = 1. Use o enquanto...fa�a

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, i, fat;
	
	printf("Digite um n�mero inteiro para fatorar: ");
	scanf("%d", &num);
	fflush(stdin);
	
	i=1;
	
	if(num<0){
		printf("Somente n�meros inteiros positivos!");
	} else if(num==0) {
		printf("Fatorial de 0 �: 1");
	} else {
	while(i<= num){
		fat = fat*i;
		i++;
	}}
	
	printf("Fatorial de %d �: %d", num, fat);
	
	return 0;
}
