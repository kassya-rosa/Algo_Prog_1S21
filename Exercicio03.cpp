// Leia 3 valores, variáveis A, B, e C, calcule a média do aluno
// sabendo que a nota A tem peso 2, a nota B tem peso 3 e a nota C tem peso 5.
// Considere que cada nota pode ir de 0 a 10, sempre com uma casa decimal.

// double

#include<stdio.h>

int main(){
	double a, b, c, media; // double %lf
	printf("Digite a nota A: ");
	scanf("%lf", &a);
	printf("Digite a nota B: ");
	scanf("%lf", &b);
	printf("Digite a nota C: ");
	scanf("%lf", &c);
	media = (a*2 + b*3 + c*5)/10;
	printf("A media eh: %.1lf", media);
	}
