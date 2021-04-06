// Complete os exerc�cios 1 (multa no eix�o) e 3 (tri�ngulo) com uma mensagem para quando a 
// condi��o n�o for satisfeita (falsa).

#include <stdio.h>
#include <locale.h>

int exerc_1(){
	setlocale(LC_ALL, "Portuguese");
	
	int veloc;
	char placa[7];
	
	printf("Digite a placa do carro: \n");
	scanf("%s", &placa);
	fflush(stdin);
	
	printf("Digite a velocidade: \n");
	scanf("%i", &veloc);
	fflush(stdin);
	
	if (veloc>80){
		printf("Velocidade registrada: %iKM/H, acima do limite permitido. O ve�culo de placa %s ser� multado!", veloc, placa);
	} else {printf("Velocidade registrada: %iKM/H, dentro do limite permitido. O ve�culo de placa %s n�o ser� multado", veloc, placa);
	}
	
	return 0;
}

int exerc_3(){
		setlocale(LC_ALL, "Portuguese");
	
	float l1, l2, l3;
	
	printf("Digite 3 n�meros: \n");
	scanf("%f%f%f", &l1, &l2, &l3);
	fflush(stdin);
	
	if (l1<=0 or l2<=0 or l3<=0){printf("N�meros inv�lidos!");
	} else if (l1<(l2+l3) and l2<(l1+l3) and l3<(l1+l2)){
			printf("Tri�ngulo v�lido!, Lados %.1f, %.1f e %.1f", l1, l2, l3);
			} else {printf("N�o � poss�vel formar um tri�ngulo!");
			}
	
	
	return 0;
}
