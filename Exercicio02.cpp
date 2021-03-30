
// Leia dois valores inteiros, no caso A e B, a seguir calcula a soma entre eles e escreva o resultado

#include<stdio.h>
int main(){
	int A, B, SOMA;
	printf("Digite um valor inteiro: ");
	scanf("%d", &A);
	printf("Digite outro valor inteiro: ");
	scanf("%d", &B);
	SOMA = A+B;
	printf("%d + %d = %d", A, B, SOMA);
}


// int %d inteiro
// float %f real
// double %lf real
// char %c caracter
// bool %b boleano
