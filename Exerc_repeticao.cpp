//Montar uma tabuada
// do 2

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int numero, i;
	
	printf("Digite o número: ");
	scanf("%d", &numero);
	fflush(stdin);
	
	autoincremento: i++;
	
	for(i=1;i<=5;i++){
	printf("%d x %d = %d\n", numero,i,numero*i);}
		
	return 0;
}
