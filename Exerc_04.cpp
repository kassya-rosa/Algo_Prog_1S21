// Sendo H = 1/1+1/2+1/3+ ... +1/N. Prepare um algoritmo para calcular H sendo N fornecido 
// pelo usuário.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");

	float H, n, i;
	
	printf("Informe o denominador máximo: ");
	scanf("%f",&n);
	
	H=0;
		
	if(n<0 or n==0){
		printf("Somente números inteiros positivos e diferente de 0!");
	} else {
		for(i=1;i<=n;i++){
			
			H = H + (1/i);
		
		}
	printf("\nResultado: %.2f\n",H);
	}
	
	return 0;
}
