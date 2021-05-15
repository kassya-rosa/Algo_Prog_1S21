// Construa um algoritmo que calcule o fatorial de um n�mero usando a estrutura PARA...FA�A, 
// baseando-se na defini��o matem�tica (N! = 1x2x3x...x N-1 x N e 0! = 1 por defini��o)

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num, conta, i;
		
	printf("Insira o n�mero que deseja fatorar: \n");
	scanf("%i", &num);
	
	conta=1;
		
	if(num<0){
		printf("Somente n�meros inteiros positivos!");
	} else if(num==0) {
		printf("Resultado: 1");
	} else {
		for(i=1;i<=num;i++){
			conta = conta*i;
		}
		printf("Resultado: %i", conta);
	}
	return 0;
}
