// Fa�a um algoritmo em portugu�s estruturado que leia tr�s valores num�ricos e encontre qual 
// o menor deles, mostrando-o no final. Fa�a o chinesinho ao lado do seu algoritmo. 

#include<stdio.h> // comandos de entrada e sa�da (printf e scanf)
#include<locale.h> // Aceitar pontua��o em portugu�s

int main(){
	setlocale(LC_ALL, "Portuguese"); // Escolhe a biblioteca de pontua��o em portugu�s
	
	float n1, n2, n3;
	
	printf("Digite tr�s n�meros: \n"); // Imprime mensagem ao usu�rio
	scanf("%f%f%f", &n1, &n2, &n3); // L� as informa��es digitadas
	fflush(stdin); // Apaga mem�ria
	
	// n1 = 5, n2 = 3 e n3 = 8
	
	if (n1<n2 and n1<n3){printf("O menor n�mero digitado �: %.1f", n1); // Se o menor valor for n1, informa o valor e interrompe o if (n1>n2, prossegue)
		}else if (n2<n1 and n2<n3){printf("O menor n�mero digitado �: %.1f", n2); // Se o menor valor for n2, informa o valor e interrompe o if (n2<n1 e n2<n3, encerra if)
			}else {printf("O menor n�mero digitado �: %.1f", n3); // Informa o valor de n3 e encerra o if (if encerrado acima)
			}
	// encerra IF
	
	return 0;
}
