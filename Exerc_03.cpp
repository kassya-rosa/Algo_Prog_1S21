// Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma 
// figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l1, l2, l3;
	
	printf("Digite 3 n�meros: \n");
	scanf("%f%f%f", &l1, &l2, &l3);
	fflush(stdin);
	
	if (l1<(l2+l3) and l2<(l1+l3) and l3<(l1+l2)){
			printf("Tri�ngulo v�lido!, Lados %.1f, %.1f e %.1f", l1, l2, l3);
			} 
		
	return 0;
}
