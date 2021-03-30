// estruturas condicionais
// if else <-
// switch case

// Leia quatro n�meros e o nome do aluno. Calcule a m�dia simples. 
//Para cada uma destas notas, mostre a m�dia acompanhada pela mensagem: "Media: ". Se esta m�dia
// for maior ou igual a 7.0, imprima a mensagem "'nome do aluno' aprovado.".
// Se a m�dia calculada for inferior a 5.0, imprima a mensagem "'nome do aluno' reprovado.".
// A impress�o da m�dia deve ser feita com apenas 1 casa decimal.
// Aluno para ser aprovado precisa de nota e frequencia, adaptar para recerber valor da frequencia;
// usando and, or ou not, verificar se o aluno est� aprovado por nota e frequencia.
// frequencia maior ou igual a 75 (valor inteiro)

#include<stdio.h> // comandos de entrada e sa�da (printf e scanf)
int main() {
	float n1, n2, n3, n4, media;// %f
	char sexo;
	char nomeAluno[20];// %s
	int freq;
	
	// scanf multiplo!
	printf("Digite as quatro notas: ");
	scanf("%f%f%f%f", &n1,&n2,&n3,&n4);
	fflush(stdin);
	
	printf("Digite o sexo do aluno (F/M): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	printf("Digite a frequencia do aluno: ");
	scanf("%i", &freq);
	fflush(stdin);
	
	printf("Digite o nome: ");
	fgets(nomeAluno, 20, stdin); // como fgets consegue colocar espa�o entre os caracteres
	fflush(stdin);
	
	media = (n1+n2+n3+n4)/4;
	
	printf("Media: %.1f\n", media); // 1 casa decimal para printf
	
	if(media>=7 and freq>=75){
	printf("%s, %c,  aprovado por nota e frequencia!\n", nomeAluno, sexo);}
	else if(media>=7 and freq<75){
	printf("%s, %c,  reprovado por falta!\n", nomeAluno, sexo);}
	else if (media<7 and freq>=75){
	printf("%s, %c, reprovado por nota!\n", nomeAluno, sexo);}
	else {printf("%s, %c, reprovado por nota e falta!\n", nomeAluno, sexo);
	}
	
	return 0;
}
