// Modifique o algoritmo 4 (Sr. ou Sra.), feito anteriormente, para ler a altura e apresentar o 
// peso ideal da pessoa, utilizando as seguintes fórmulas
// para homem: peso = (72.5 * altura) - 58
// para mulher: peso = (62.1 * altura) - 44.7

#include<stdio.h>
#include<ctype.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[25];
	char sexo;
	float alt, peso;
	
	printf("Digite o nome: ");
	fgets(nome, 25, stdin); // como fgets consegue colocar espaço entre os caracteres
	fflush(stdin);
	
	printf("Digite o sexo (F/M): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	if (toupper(sexo)== 'F' or toupper(sexo)== 'M'){
		printf("Digite altura em metros: ");
		scanf("%f", &alt);
		fflush(stdin);
			if (alt>2.5 or alt < 0.3){printf("Informação de altura inválida!");
			}else {
			
				if (toupper(sexo)=='F'){peso = (62.1 * alt)-44.7;
					printf("Ilma Sra. %s\nSeu peso ideal é: %.1f", nome, peso);}
					else if (toupper(sexo)=='M') {peso = (72.5 * alt)-58;
						printf("Ilmo Sr. %s\nSeu peso ideal é: %.1f", nome, peso);}
						else {printf("Informações inválidas!");}
			}
		} else {
			printf("Informação de sexo inválida!");
		}
	return 0;
}
