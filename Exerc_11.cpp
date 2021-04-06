// Alterar o exercício do triângulo (exercício 9), de forma que o algoritmo apresente no caso de 
// triângulo o seu tipo: equilátero (todos os lados são iguais), isósceles (dois lados iguais) ou um 
// outro triângulo qualquer (escaleno). Apresente o algoritmo, fazendo o teste do algoritmo 
// (chinesinho) ao lado. 

#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float l1, l2, l3;
	
	printf("Digite 3 números: \n");
	scanf("%f%f%f", &l1, &l2, &l3);
	fflush(stdin);
	
	//l1 = 2, l2 = 2, l3 = 3
	
	if (l1<=0 or l2<=0 or l3<=0){printf("Números inválidos!"); // Todos os números maiores que 0, prossegue o IF
	} 
		else if (l1<(l2+l3) and l2<(l1+l3) and l3<(l1+l2)){ // Cada lado é menor que a soma dos demais lados; 2<4, 2<5, 3<4.Prossegue o if
			if (l1==l2 and l2==l3){ // 2=2 e 2!=3, prossegue com o if
				printf("Triângulo equilátero, Lados %.1f, %.1f e %.1f", l1, l2, l3);
				}
				else if ((l1==l2 and l2!=l3)or(l1!=l2 and l2==l3)or (l1==l3 and l2!=l1)){ // 2=2 e 2!=3, encerra o if e informaa frase "Triângulo isósceles"
					printf("Triângulo isósceles, Lados %.1f, %.1f, %.1f", l1, l2, l3);
					}
					else if(l1!=l2 and l2!=l3 and l1!=l3){ // if encerrado
						printf("Triâgulo escaleno, Lados %.1f, %.1f, %.1f", l1, l2, l3);
						}
		}
		else { // if encerrado
		printf("Não é possível formar um triângulo");
		}
		
		// if encerrado
		
	return 0;
}
