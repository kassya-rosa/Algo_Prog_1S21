// // Fazer um algoritmo que leia tr�s valores, determine e imprima o maior deles.. 

#include<stdio.h> 
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	
	float n1, n2, n3;
	
	printf("Digite tr�s n�meros: \n"); 
	scanf("%f%f%f", &n1, &n2, &n3); 
	fflush(stdin); 
	
	if (n1>n2 and n1>n3){printf("O maior n�mero digitado �: %.1f", n1); 
		}else if (n2>n1 and n2>n3){printf("O maior n�mero digitado �: %.1f", n2);
			}else {printf("O maior n�mero digitado �: %.1f", n3); 
			}
		
	return 0;
}
