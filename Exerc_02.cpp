//informar a idade!
//0-3 -> beb�
//4-10 -> crian�a
//11-17 -> adolescente
//18-40 -> adulto
//41-60 -> adulto 2
//61 ... -> idoso

#include<stdio.h>

int main(){
	
	int idade;
	
	printf("Digite a idade: ");
	scanf("%i", &idade);
	fflush(stdin);
	
	if (idade>=61){
		printf("Idade informada %i, Idoso\n", idade);}
		else if (idade>=41){
			printf("Idade informada %i, Adulto 2\n", idade);}
			else if (idade>=18){
				printf("Idade informada %i, Adulto\n", idade);}
				else if (idade>=11){
					printf("Idade informada %i, Adolescente\n", idade);}
					else if (idade>=4){
						printf("Idade informada %i, Crian�a\n", idade);}
						else {printf("Idade informada %i, Beb�\n", idade);
						}
	
	return 0;
}
