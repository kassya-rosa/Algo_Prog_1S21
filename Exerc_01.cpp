//  Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao 
// motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite 
// de 80 km/h). 

#include <stdio.h>
#include <locale.h>

int main(){
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
		printf("Velocidade registrada: %iKM/H, acima do limite permitido. O veículo de placa %s será multado!", veloc, placa);
	}
	
	return 0;
}
