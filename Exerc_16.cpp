//Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome 
//e a altura da menor delas.

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese")	;
	
	float alt1, alt2, alt3;
	char nome1[20], nome2[20], nome3[20];
	
	printf("Digite o nome de 3 pessoas: \n");
	fgets(nome1, 20, stdin);
	fflush(stdin);
	fgets(nome2, 20, stdin);
	fflush(stdin);
	fgets(nome3, 20, stdin);
	fflush(stdin);
	
	printf("Digite a altura (em metros) das 3 pessoas informadas anteriormente: ");
	scanf("%f%f%f", &alt1, &alt2, &alt3);
	fflush(stdin);
	
	if (alt1<alt2 and alt1<alt3){
		printf("A menor pessoa é %s com %.2fm de altura.", nome1, alt1); 
		}
		else if (alt2<alt1 and alt2<alt3){
			printf("A menor pessoa é %s com %.2fm de altura.", nome2, alt2);
			}
			else {
				printf("A menor pessoa é %s com %.2fm de altura.", nome3, alt3); 
				}
		
	return 0;
}

