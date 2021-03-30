// Leia 4 valores nteiros A, B, C e D
// A seguir, se B for maior do que C
// e se D for maior do que A, 
// e a soma de C com D for  maior que a soma de A e B e
// se C e D, ambos, forem positivos
// e se a variável A for par escrever
// a mensagem "Valores aceitos", senão escrever
// "Valores nao aceitos"

#include<stdio.h>
int main(){
	
	int a, b, c, d;
	
	// inicializando as variáveis
	
	a=2;
	b=3;
	c=2;
	d=6;
	
	if(b>c and d>a and c+d>a+b and c>0 and d>0 and a%2==0){printf("Valores aceitos");}
	else {printf("Valores nao aceitos");
	}
	
	return 0;
}
