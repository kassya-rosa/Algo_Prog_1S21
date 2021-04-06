// Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma 
// figura geométrica onde cada lado é menor do que a soma dos outros dois lados).

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l1, l2, l3;
	
	printf("Digite 3 números: \n");
	scanf("%f%f%f", &l1, &l2, &l3);
	fflush(stdin);
	
	if (l1<(l2+l3) and l2<(l1+l3) and l3<(l1+l2)){
			printf("Triângulo válido!, Lados %.1f, %.1f e %.1f", l1, l2, l3);
			} 
		
	return 0;
}
