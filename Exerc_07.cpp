//  Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, sub;
	
	printf("Digite dois n�meros: \n");
	scanf("%f%f", &n1, &n2);
	fflush(stdin);
	
	if (n1>n2){sub = n1 - n2;
		printf("A subtra��o � igual a: %.1f", sub);
		} else{sub = n2 - n1;
			printf("A subtra��o � igual a: %.1f", sub);
			}
	
	
	return 0;
}
