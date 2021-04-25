// Nome: Kassya Beathrys Rosa Silva - Matr�cula: UC21106809 - Ci�ncia da Computa��o

// Um cinema de Bras�lia est� interessado em descobrir o perfil das pessoas que frequentam
// suas sess�es de filmes e para isso, necessita realizar algumas verifica��es nas informa��es prestadas. Devem 
// ser solicitados a quantidade de sess�es que ser�o realizadas, o nome do filme, a quantidade de pessoas que 
// assistiram o filme, assim como o sexo e a idade. No entanto, para cada um deles, h� uma valida��o que deve ser 
// feita:
// 1. Solicite a quantidade de sess�es, e fa�a a valida��o, aceitando exatamente 2 (duas) sess�es. 
// 2. Solicite o nome do filme, e fa�a a valida��o, n�o aceitando o nome �vazio�. 
// 3. Solicite a quantidade de pessoas que assistiram ao filme, n�o podendo aceitar valor inferior a 10 (dez).
// 4. Para cada pessoa que assistiu ao filme dever� ser solicitado e validado o sexo (M - masculino, F - Feminino) e a idade (de 3 a 100 anos). 
// 5. (Funcionalidade extra) Solicite informar se o filme da sess�o � 3D, aceitar somente S - sim ou N - n�o..

// Ap�s a leitura dos dados do filme, dever� ser apresentado, em uma janela limpa:
// 1. o nome do filme, a quantidade de pessoas do sexo feminino e a quantidade de pessoas do sexo masculino que assistiram ao filme.
// 2. a quantidade de pessoas, seguindo a classifica��o por idade indicada (3-13: Crian�as; 14-17: Adolescentes; 18-64: Adultos; 65-100:Idosos). 

// Depois da leitura dos dados de cada sess�o, dever� ser mostrada, em uma tela limpa a quantidade de pessoas 
// maiores de idade (idade maior ou igual a 18 anos) do sexo masculino e a quantidade de pessoas maiores de idade do sexo feminino que estiveram presentes.
// Tamb�m mostrar� qual foi a receita e o lucro de cada sess�o.

// (Funcionalidade extra) Sess�es 2D tem custo R$ 100,00; sess�es 3D tem custo R$ 150,00; 
// crian�as pagam R$ 10,00; adolescentes e adultos pagam R$ 20,00 e idosos pagam R$ 15,00 no ingresso.

#include<stdio.h> //biblioteca para printf e scanf 
#include<stdlib.h> //biblioteca para comandos Windows
#include<string.h> //biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include<locale.h> // biblioteca para utilizar acentua��o do portugu�s: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/

int main(){
	setlocale(LC_ALL, "Portuguese"); // Ajuste para aceitar a acentua��o do Portugu�s
	
	// Declara��o das vari�veis, conforme o livro c�digo limpo, os nomes significam algo e � poss�vel ler a vari�vel
	
	int idade, i, qtde_sessao;
	int expec1, qtde_fem1, qtde_masc1, qtde_crianc1, qtde_adol1, qtde_adul1, qtde_ido1, qtde_adul_fem1, qtde_adul_masc1;// vari�veis da primeira sess�o
	int expec2, qtde_fem2, qtde_masc2, qtde_crianc2, qtde_adol2, qtde_adul2, qtde_ido2, qtde_adul_fem2, qtde_adul_masc2;// vari�veis da segunda sess�o
	int total_adul_fem, total_adul_masc, receita1, receita2, lucro; // vari�veis do fim das sess�es
	char sexo,nome_filme1[50],nome_filme2[50],tresD1, tresD2, filme_2sessao;
	
	printf("Cinema em casa!\n\nDia D\n\n"); // Nome do estabelecimento :)
		
	do{//primeiro do-while - respons�vel por permitir ao usu�rio digitar exatamente 2 sess�es
		printf("Informe a quantidade de sess�es: "); // apresenta texto na tela
		scanf("%d", &qtde_sessao); // recebe o valor digitado pelo usu�rio e grava na vari�vel qtde_sessao
		fflush(stdin); // limpa o buffer de mem�ria
			if(qtde_sessao != 2) // se a quantidade informada pelo usu�rio for diferente de 2, apresenta o erro abaixo
				printf("\nQuantidade inv�lida!\n"); // apresenta texto na tela
	}while(qtde_sessao != 2);// repeti��o quando o n�mero informado estiver errado
		
	do{//segundo do-while - respons�vel por permitir ao usu�rio digitar o nome do filme
		printf("\nDigite o nome do filme da primeira sess�o: "); // apresenta o texto na tela
		fgets(nome_filme1, 50, stdin); // recebe o valor digitado pelo usu�rio e grava na vari�vel nome_filme1
		fflush(stdin); // limpa o buffer de mem�ria
			if(strlen(nome_filme1) <= 1) // strlen: verifica o tamanho da string, se for menor ou igual a 1, apresenta o erro
				printf("\nNome inv�lido!");	// apresenta texto na tela	
	}while(strlen(nome_filme1) <= 1);// repeti��o quando o nome do filme estiver vazio
		
	do {//terceiro do do-while - respons�vel por permitir ao usu�rio digitar se o filme � 3D ou n�o
		printf("\nInforme se o filme desta sess�o � 3D [S|N]: "); // apresenta texto na tela
		scanf("%c", &tresD1);// recebe o valor digitado pelo usu�rio e grava na vari�vel tresD1
		fflush(stdin); // limpa o buffer de mem�ria
		
		tresD1 = toupper(tresD1); // converte o valor digitado em letra mai�scula
		
			if(tresD1 != 'S' && tresD1 != 'N') // se o caracter digitado for diferente de S e N, apresenta o erro abaixo
				printf("\nOp��o inv�lida!");// apresenta texto na tela
	}while(tresD1 != 'S' && tresD1 != 'N');// repeti��o quando o caracter n�o for S ou N
	
	do{//quarto do do-while - respons�vel por permitir ao usu�rio digitar quantas pessoas assistiram ao filme
		printf("\nInforme quantas pessoas assistiram esta sess�o: ");// apresenta texto na tela
		scanf("%d", &expec1);// recebe o valor digitado pelo usu�rio e grava na vari�vel expec1
		fflush(stdin);// limpa o buffer de mem�ria
			if(expec1==0) // se o valor digitado for letra ou 0, apresenta o erro abaixo
			printf("\nOp��o informada n�o � n�mero");// apresenta texto na tela
				else if(expec1<10) // se o valor digitado for maior que 0 e menor que 1, apresenta o erro abaixo
				printf("\nQuantidade inv�lida. M�nimo de 10 pessoas");// apresenta texto na tela
	}while(expec1<10); // repeti��o quando o valor digitado for menor que 10
	
	qtde_fem1 = 0; // inicializa��o da vari�vel contadora
	qtde_masc1 = 0;// inicializa��o da vari�vel contadora
	qtde_crianc1 = 0;// inicializa��o da vari�vel contadora
	qtde_adol1 = 0;// inicializa��o da vari�vel contadora
	qtde_adul1 = 0;// inicializa��o da vari�vel contadora
	qtde_ido1 = 0;// inicializa��o da vari�vel contadora
	qtde_adul_fem1 = 0;// inicializa��o da vari�vel contadora
	qtde_adul_masc1 = 0;// inicializa��o da vari�vel contadora
	i = 1;// inicializa��o da vari�vel contadora
	
	do{//quinto do do-while - respons�vel por permitir ao usu�rio digitar o sexo e idade de cada expectador
		printf("\nInforme o sexo do expectador %d [F|M]: ", i);// apresenta texto na tela
		scanf("%c", &sexo); // recebe o valor digitado pelo usu�rio e grava na vari�vel sexo
		fflush(stdin);// limpa o buffer de mem�ria
			sexo = toupper(sexo); // converte o caracter digitado em letra mai�scula
			do{// permite ao usu�rio corrigir caso tenho informado o valor errado
				if (sexo!= 'F'&& sexo != 'M'){ // se o valor digitado for diferente de F e M, apresenta o erro abaixo
				printf("\nSexo inv�lido!\nInforme o sexo do expectador %d [F|M]: ", i);// apresenta texto na tela
				scanf("%s", &sexo); // recebe o valor digitado e grava na vari�vel sexo
				fflush(stdin);// limpa o buffer de mem�ria
				sexo = toupper(sexo); // converte a letra em mai�scula
			}}while(sexo!= 'F'&& sexo != 'M'); // repeti��o quando o valor digitado � diferente de F ou M
		printf("\nInforme a idade do expectador %d: ", i); // apresenta texto na tela
		scanf("%d", &idade);// recebe o valor digitado e grava na vari�vel idade
		fflush(stdin);// limpa o buffer de mem�ria
			do{// permite ao usu�rio corrigir caso tenho informado o valor errado
				if(idade==0){ // se o valor digitado for letra ou 0, apresenta o erro abaixo
				printf("Valor informado n�o � n�mero!\nInforme a idade do expectador %d: ", i); // apresenta texto na tela
				scanf("%d", &idade);// recebe o valor digitado e grava na vari�vel idade
				fflush(stdin);// limpa o buffer de mem�ria
				} else if(idade<3 or idade>100) { // se o valor digitado for menor que 3 ou maior que 100, apresenta o erro abaixo
				printf("\nIdade inv�lida!\nInforme a idade do expectador %d: ", i); // apresenta texto na tela
				scanf("%d", &idade); // recebe o valor digitado e grava na vari�vel idade
				fflush(stdin);// limpa o buffer de mem�ria
			}}while(idade<3 or idade>100); // repeti��o quando o valor digitado for menor que 3 ou maior que 100
		if(sexo == 'F') // se o sexo digitado for 'F', entra no contador abaixo
			qtde_fem1 ++; // conta quantos valores 'F' foram digitados
			else if (sexo == 'M') // se o sexo digitado for 'M', entra no contador abaixo
				qtde_masc1 ++; // conta quantos valores 'M' foram digitados
			
		if(idade<=13) // se a idade digitada for menor do que 14, entra no contador abaixo
			qtde_crianc1 ++; // conta quantas idades menores do que 14 foram digitadas
			else if (idade<=17) // se a idade digitada for menor do que 18, entra no contador abaixo
				qtde_adol1 ++;// conta quantas idades menores do que 18 foram digitadas
				else if(idade<=64) // se a idade digitada for menor do que 65, entra no contador abaixo
					qtde_adul1 ++; // conta quantas idades menores do que 65 foram digitadas
					else // se a idade digitada for igual ou maior do que 65, entra no contador abaixo
						qtde_ido1 ++; // conta quantas idades iguais ou maiores de 65 foram digitadas
						
		if(sexo =='F' and idade >=18) // se forem digitados sexo 'F' e idade maior ou igual a 18, entra no contador abaixo
			qtde_adul_fem1 ++; // conta quantas pessoas com sexo 'F' e idade maior ou igual a 18 foram digitadas
		
		if(sexo =='M' and idade >=18) // se forem digitados sexo 'M' e idade maior ou igual a 18, entra no contador abaixo
			qtde_adul_masc1 ++;// conta quantas pessoas com sexo 'M' e idade maior ou igual a 18 foram digitadas
			
		i++; // contador de expectadores
	}while(i <= expec1); // repeti��o quando o contador for menor que o n�mero de expectadores declarado pelo usu�rio
			
	system("cls"); // limpa a tela do terminal
	
	printf("\nPrimeira sess�o!\n\nNome do filme: %s", nome_filme1); // apresenta texto na tela
	printf("\nQtde expectadores femininos: %d", qtde_fem1); // apresenta texto na tela
	printf("\nQtde expectadores masculinos: %d", qtde_masc1); // apresenta texto na tela
	printf("\nQtde Crian�as: %d", qtde_crianc1); // apresenta texto na tela
	printf("\nQtde Adolescentes: %d", qtde_adol1); // apresenta texto na tela
	printf("\nQtde Adultos: %d", qtde_adul1); // apresenta texto na tela
	printf("\nQtde Idosos: %d", qtde_ido1);// apresenta texto na tela
	printf("\nFilme � 3D?: %c\n", tresD1); // apresenta texto na tela
	
	system("pause"); // deixa a tela com mensagem de pausa at� o usu�rio digitar alguma coisa
	
	system("cls"); // limpa a tela do terminal
	
	do {// do-while respons�vel por permitir ao usu�rio informar se o filme da segunda sess�o � o mesmo da primeira
		printf("O filme da pr�xima sess�o � o mesmo? [S|N]\n"); // apresenta texto na tela
		scanf("%c", &filme_2sessao);// recebe o valor digitado pelo usu�rio e grava na vari�vel filme_2sessao
		fflush(stdin);// limpa buffer de mem�ria
		
		filme_2sessao = toupper(filme_2sessao); // converte o caracter em mai�sculo
		
		if(filme_2sessao != 'S' && filme_2sessao != 'N') // se o caracter digitado for diferente de S e N, apresenta o erro abaixo
				printf("\nOp��o inv�lida!\n"); // apresenta texto na tela
	}while(filme_2sessao != 'S' && filme_2sessao != 'N');// repeti��o quando o caracter n�o for S ou N
	
	if (filme_2sessao == 'N'){ // se o filme da segunda sess�o for diferente, solicita os dados do filme
		do{ //primeiro do-while da segunda sess�o - respons�vel por permitir ao usu�rio digitar o nome do filme
			printf("\nDigite o nome do filme da segunda sess�o: "); // apresenta texto na tela
			fgets(nome_filme2, 50, stdin); // recebe o valor digitado pelo usu�rio e grava na var�vel nome_filme2
			fflush(stdin);// limpa o buffer de mem�ria
				if(strlen(nome_filme2) <= 1 )// strlen: verifica o tamanho da string, se for menor ou igual a 1, apresenta o erro
					printf("\nNome inv�lido!"); // apresenta texto na tela
		}while(strlen(nome_filme2) <= 1);// repeti��o quando o nome do filme estiver vazio
			
		do {//segundo do do-while da segunda sess�o - respons�vel por permitir ao usu�rio digitar se o filme � 3D ou n�o
			printf("\nInforme se o filme desta sess�o � 3D [S|N]: "); // apresenta texto na tela
			scanf("%c", &tresD2);// recebe o valor digitado pelo usu�rio e grava na vari�vel tresD2
			fflush(stdin);// limpa o buffer de mem�ria
			
			tresD2 = toupper(tresD2); // converte o caracter digitado em mai�sculo
			
				if(tresD2 != 'S' && tresD2 != 'N') // se o caracter digitado for diferente de S e N, apresenta o erro abaixo
					printf("\nOp��o inv�lida!"); // apresenta texto na tela
		}while(tresD2 != 'S' && tresD2 != 'N');// repeti��o quando o caracter n�o for S ou N
		}
	else { // se o segundo filme for o mesmo que o da primeira sess�o
		
		strcpy(nome_filme2,nome_filme1); // strcpy copia para primeira vari�vel string o valor da segunda
		tresD2 = tresD1; // atribui � vari�vel tresD2 o valor do caracter da vari�vel tresD1
	}// finaliza o else
		do{//terceiro do do-while da segunda sess�o - respons�vel por permitir ao usu�rio digitar quantas pessoas assistiram ao filme
			printf("\nInforme quantas pessoas assistiram a segunda sess�o: "); // apresenta texto na tela
			scanf("%d", &expec2);// recebe o valor digitado pelo usu�rio e grava na vari�vel expec1
			fflush(stdin);// limpa o buffer de mem�ria
				if(expec2<10) // se o valor digitado for letra ou 0, apresenta o erro abaixo
				printf("\nQuantidade inv�lida. M�nimo de 10 pessoas"); // apresenta texto na tela
		}while(expec2<10);// repeti��o quando o valor digitado for menor que 10
		
		qtde_fem2 = 0; // inicializa��o da vari�vel contadora
		qtde_masc2 = 0; // inicializa��o da vari�vel contadora
		qtde_crianc2 = 0; // inicializa��o da vari�vel contadora
		qtde_adol2 = 0; // inicializa��o da vari�vel contadora
		qtde_adul2 = 0; // inicializa��o da vari�vel contadora
		qtde_ido2 = 0; // inicializa��o da vari�vel contadora
		qtde_adul_fem2 = 0; // inicializa��o da vari�vel contadora
		qtde_adul_masc2 = 0; // inicializa��o da vari�vel contadora
		i = 1; // inicializa��o da vari�vel contadora
		
		do{//quarto do do-while da segunda sess�o - respons�vel por permitir ao usu�rio digitar o sexo e idade de cada expectador
			printf("\nInforme o sexo do expectador %d [F|M]: ", i);// apresenta texto na tela
			scanf("%c", &sexo);// recebe o valor digitado pelo usu�rio e grava na vari�vel sexo
			fflush(stdin);// limpa o buffer de mem�ria
				sexo = toupper(sexo);// converte o caracter digitado em letra mai�scula
				do{ // permite ao usu�rio corrigir caso tenho informado o valor errado
					if (sexo!= 'F'&& sexo != 'M'){// se o valor digitado for diferente de F e M, apresenta o erro abaixo
					printf("\nSexo inv�lido!\nInforme o sexo do expectador %d [F|M]: ", i); // apresenta texto na tela
					scanf("%s", &sexo);// recebe o valor digitado e grava na vari�vel sexo
					fflush(stdin);// limpa o buffer de mem�ria
					sexo = toupper(sexo);// converte a letra em mai�scula
				}}while(sexo!= 'F'&& sexo != 'M');// repeti��o quando o valor digitado � diferente de F ou M
			printf("\nInforme a idade do expectador %d: ", i); // apresenta texto na tela
			scanf("%d", &idade);// recebe o valor digitado e grava na vari�vel idade
			fflush(stdin);// limpa o buffer de mem�ria
				do{// permite ao usu�rio corrigir caso tenho informado o valor errado
					if(idade==0){// se o valor digitado for letra ou 0, apresenta o erro abaixo
					printf("Valor informado n�o � n�mero!\nInforme a idade do expectador %d: ", i); // apresenta texto na tela
					scanf("%d", &idade);// recebe o valor digitado e grava na vari�vel idade
					fflush(stdin);// limpa o buffer de mem�ria
					} else if(idade<3 or idade>100) {// se o valor digitado for menor que 3 ou maior que 100, apresenta o erro abaixo
					printf("\nIdade inv�lida!\nInforme a idade do expectador %d: ", i); // apresenta texto na tela
					scanf("%d", &idade);// recebe o valor digitado e grava na vari�vel idade
					fflush(stdin);// limpa o buffer de mem�ria
				}}while(idade<3 or idade>100);// repeti��o quando o valor digitado for menor que 3 ou maior que 100
			if(sexo == 'F')// se o sexo digitado for 'F', entra no contador abaixo
				qtde_fem2 ++; // conta quantos valores 'F' foram digitados
				else if (sexo == 'M') // se o sexo digitado for 'M', entra no contador abaixo
					qtde_masc2 ++; // conta quantos valores 'M' foram digitados
				
			if(idade<=13) // se a idade digitada for menor do que 14, entra no contador abaixo
				qtde_crianc2 ++; // conta quantas idades menores do que 14 foram digitadas
				else if (idade<=17) // se a idade digitada for menor do que 18, entra no contador abaixo
					qtde_adol2 ++; // conta quantas idades menores do que 18 foram digitadas
					else if(idade<=64) // se a idade digitada for menor do que 65, entra no contador abaixo
						qtde_adul2 ++; // conta quantas idades menores do que 65 foram digitadas
						else // se a idade digitada for igual ou maior do que 65, entra no contador abaixo
							qtde_ido2 ++; // conta quantas idades iguais ou maiores de 65 foram digitadas
							
			if(sexo =='F' and idade >=18) // se forem digitados sexo 'F' e idade maior ou igual a 18, entra no contador abaixo
				qtde_adul_fem2 ++; // conta quantas pessoas com sexo 'F' e idade maior ou igual a 18 foram digitadas
			
			if(sexo =='M' and idade >=18) // se forem digitados sexo 'M' e idade maior ou igual a 18, entra no contador abaixo
				qtde_adul_masc2 ++; // conta quantas pessoas com sexo 'M' e idade maior ou igual a 18 foram digitadas
			
			i++; // contador de expectadores
		}while(i <= expec2); // repeti��o quando o contador for menor que o n�mero de expectadores declarado pelo usu�rio
	
	system("cls"); // limpa a tela do terminal
	
	printf("\nSegunda sess�o!\n\nNome do filme: %s\n", nome_filme2); // apresenta texto na tela
	printf("\nQtde expectadores femininos: %d", qtde_fem2); // apresenta texto na tela
	printf("\nQtde expectadores masculinos: %d", qtde_masc2); // apresenta texto na tela
	printf("\nQtde Crian�as: %d", qtde_crianc2); // apresenta texto na tela
	printf("\nQtde Adolescentes: %d", qtde_adol2); // apresenta texto na tela
	printf("\nQtde Adultos: %d", qtde_adul2); // apresenta texto na tela
	printf("\nQtde Idosos: %d", qtde_ido2); // apresenta texto na tela
	printf("\nFilme � 3D?: %c\n", tresD2);// apresenta texto na tela
	
	system("pause"); // deixa a tela com mensagem de pausa at� o usu�rio digitar alguma coisa
	
	system("cls"); // limpa a tela do terminal
	
	total_adul_fem = qtde_fem1 + qtde_fem2; // soma a quantidade total de adultos do sexo feminino das duas sess�es
	total_adul_masc = qtde_masc1 + qtde_masc2; // soma a quantidade total de adultos do sexo masculino das duas sess�es
	
	receita1 = (qtde_crianc1*10) + ((qtde_adol1+qtde_adul1)*20)+(qtde_ido1*15); // soma a receita gerada pela primeira sess�o

	receita2 = (qtde_crianc2*10) + ((qtde_adol2+qtde_adul2)*20)+(qtde_ido2*15); // soma a receita gerada pela segunda sess�o
	
	if(tresD1 == 'S' and tresD2 == 'S') // se as duas sess�es foram de filmes 3D, executa a soma abaixo
		lucro = receita1+receita2-300; // calcula o lucro total das sess�es
		else if ((tresD1 == 'S' and tresD2 == 'N') or (tresD1 == 'N' and tresD2 == 'S')) // se s� uma das sess�es foi 3D, executa a soma abaixo
			lucro = receita1+receita2-250; // calcula o lucro total das sess�es
				else if(tresD1 == 'N' and tresD2 == 'N') // se nenhuma sess�o foi 3D
					lucro = receita1+receita2-200;// calcula o lucro total das sess�es
	
	printf("Resumo do dia:\n\n"); // apresenta texto na tela
	printf("Qtde expectadores masculinos adultos: %d", total_adul_masc); // apresenta texto na tela
	printf("\nQtde expectadores femininos adultos: %d", total_adul_fem); // apresenta texto na tela
	printf("\nReceita do dia: R$ %d", receita1+receita2); // apresenta texto na tela
	printf("\nLucro do dia: R$ %d", lucro); // apresenta texto na tela
		
	return 0; // finaliza o algoritmo
}
