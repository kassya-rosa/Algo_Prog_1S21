// Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual 
// o menor deles, mostrando-o no final. Faça o chinesinho ao lado do seu algoritmo. 

#include<stdio.h> // comandos de entrada e saída (printf e scanf)
#include<locale.h> // Aceitar pontuação em português

int main(){
	setlocale(LC_ALL, "Portuguese"); // Escolhe a biblioteca de pontuação em português
	
	float n1, n2, n3;
	
	printf("Digite três números: \n"); // Imprime mensagem ao usuário
	scanf("%f%f%f", &n1, &n2, &n3); // Lê as informações digitadas
	fflush(stdin); // Apaga memória
	
	// n1 = 5, n2 = 3 e n3 = 8
	
	if (n1<n2 and n1<n3){printf("O menor número digitado é: %.1f", n1); // Se o menor valor for n1, informa o valor e interrompe o if (n1>n2, prossegue)
		}else if (n2<n1 and n2<n3){printf("O menor número digitado é: %.1f", n2); // Se o menor valor for n2, informa o valor e interrompe o if (n2<n1 e n2<n3, encerra if)
			}else {printf("O menor número digitado é: %.1f", n3); // Informa o valor de n3 e encerra o if (if encerrado acima)
			}
	// encerra IF
	
	return 0;
}
