// Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor 
// absoluto) elaborando os cálculos matemáticos para isso.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um número: ");
	scanf("%f", &num);
	fflush(stdin);
	
	if (num<0){num = -(num);
		printf("Módulo do número digitado: %.0f", num);
	} else {printf("Módulo do número digitado: %.0f", num);
	}
	
	return 0;
}

