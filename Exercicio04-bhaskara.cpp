// algoritmo para calcular Bhaskara
// Receber os valores de a, b e c
// Saída x' e x"
// Processamento: calculo

#include<stdio.h> // biblioteca para entrada e saída de dados: printf e scanf
#include<math.h> // biblioteca para cálculo matemático

int main(){// início do algoritmo: função main
	double a, b, c, x1, x2, delta;// declaração de variáveis
	printf("Digite o valor de a:\n");
	scanf("%lf", &a);
		if (a == 0) {printf("Nao eh possivel divisao por 0");
		} else {
	printf("Digite o valor de b:\n");
	scanf("%lf", &b);
	printf("Digite o valor de c:\n");
	scanf("%lf", &c);
	delta = pow(b,2)-(4*a*c);
		if (delta < 0) {printf("Nao eh possivel calcular Bhaskara com delta negativo");
		}else 
			if (delta == 0){
							x1 = -(b)/(2*a);
							printf("Resultado - X1 e X2 = %.1lf", x1);}
				else{
	x1 = (-(b)+sqrt(delta))/(2*a);
	x2 = (-(b)-sqrt(delta))/(2*a);
	printf("Resultado:\nX1: %.1lf\nX2: %.1lf", x1, x2);}}
	return 0; // retorno da função
}// final do algoritmo

