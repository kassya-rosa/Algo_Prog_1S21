// Alterar o exerc�cio do tri�ngulo (exerc�cio 9), de forma que o algoritmo apresente no caso de 
// tri�ngulo o seu tipo: equil�tero (todos os lados s�o iguais), is�sceles (dois lados iguais) ou um 
// outro tri�ngulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
// (chinesinho) ao lado. 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l1, l2, l3;
	
	printf("Digite 3 n�meros: \n");
	scanf("%f%f%f", &l1, &l2, &l3);
	fflush(stdin);
	
	//l1 = 2, l2 = 2, l3 = 3
	
	if (l1<=0 or l2<=0 or l3<=0){printf("N�meros inv�lidos!"); // Todos os n�meros maiores que 0, prossegue o IF
	} 
		else if (l1<(l2+l3) and l2<(l1+l3) and l3<(l1+l2)){ // Cada lado � menor que a soma dos demais lados; 2<4, 2<5, 3<4.Prossegue o if
			if (l1==l2 and l2==l3){ // 2=2 e 2!=3, prossegue com o if
				printf("Tri�ngulo equil�tero, Lados %.1f, %.1f e %.1f", l1, l2, l3);
				}
				else if ((l1==l2 and l2!=l3)or(l1!=l2 and l2==l3)or (l1==l3 and l2!=l1)){ // 2=2 e 2!=3, encerra o if e informaa frase "Tri�ngulo is�sceles"
					printf("Tri�ngulo is�sceles, Lados %.1f, %.1f, %.1f", l1, l2, l3);
					}
					else if(l1!=l2 and l2!=l3 and l1!=l3){ // if encerrado
						printf("Tri�gulo escaleno, Lados %.1f, %.1f, %.1f", l1, l2, l3);
						}
		}
		else { // if encerrado
		printf("N�o � poss�vel formar um tri�ngulo");
		}
		
		// if encerrado
		
	return 0;
}
