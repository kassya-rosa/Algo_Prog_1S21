// - Nome do destino;
// - Quantidade de assentos (>= 90 && <= 200);
// - Valor da passagem/reserva, em reais;

//           Menu
// - Verificar a ocupação do Destino (mapa do avião);
// - Efetuar uma reserva;
// - Confirmar uma reserva;
// - Cancelar uma reserva;
// - Relatório;

//           Regras

// - Podem ser confirmadas ou canceladas as reservas;
// - Passageiros até 5 anos tem 50% de desconto;

//printf("\033[31;1m%d\033[0m << código>>"); Vermelho
//printf("\033[34;1m%d\033[0m << código>>"); Azul
//printf("\033[32;1m%d\033[0m << código>>"); Verde

#include<stdio.h> //biblioteca para printf e scanf 
#include<stdlib.h> //biblioteca para comandos Windows
#include<string.h> //biblioteca para strlen e strcmp: http://linguagemc.com.br/a-biblioteca-string-h/
#include<ctype.h> //biblioteca para o uso do toupper e tolower: http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include<locale.h> // biblioteca para utilizar acentuação do português: http://linguagemc.com.br/localizacao-de-programas-com-locale-h/
int main(){
    setlocale(LC_ALL,"Portuguese");
   
    char nome_destino[50], menu_princ, menu_destino_escolhido;
    int assentos_aviao, menu_opcao_destino;
    float valor_passagem;


do{// do-while para voltar ao menu principal   
    printf("***********************************************\n");
    printf("*************SALUMAR LINHAS AEREAS*************\n");
    printf("***********************************************\n\n\n\n");
   
		do{// do-while para verificação de campo sem valor
			printf("    INFORME O NOME DO DESTINO\n\n");
		    fgets(nome_destino, 50, stdin);
		    fflush(stdin);
   				if(strlen(nome_destino) <= 1)
   					printf("    NOME INVÁLIDO\n\n");
   		}while(strlen(nome_destino) <= 1);
   		
   	//	printf("Nome: %s", nome_destino);
   	
   	//system("pause");
    system("cls");
    
    printf("***********************************************\n");
    printf("*************SALUMAR LINHAS AEREAS*************\n");
    printf("***********************************************\n\n\n\n");
       
   		do{							
			printf("    INFORME O VALOR DA PASSAGEM\n\n");
		    scanf("%f", &valor_passagem);
		    fflush(stdin);
				if(valor_passagem<0)
					printf("\n    VALOR INVÁLIDO\n");
		}while(valor_passagem<0);
   
   	//	printf("Valor: %.2f", valor_passagem);
   	//system("pause");
    system("cls");
   
    printf("***********************************************\n");
    printf("*************SALUMAR LINHAS AEREAS*************\n");
    printf("***********************************************\n\n\n\n");
       
   		do{							
			printf("    INFORME A QUANTIDADE DE ASSENTOS DO AVIÃO\n\n");
		    scanf("%d", &assentos_aviao);
		    fflush(stdin);
				if(assentos_aviao<90 || assentos_aviao>200)
					printf("\n    QUANTIDADE DE ASSENTOS INVÁLIDA\nO AVIÃO POSSUI NO MÍNIMO 90 E NO MÁXIMO 200 ASSENTOS\n\n\n");
		}while(assentos_aviao<90 || assentos_aviao>200);
   
 	// Declaração de variáveis das reservas
    int aux_assentos=1,aux_reserva=1, primeira_reserva=1, aux_canceladas, aux_confirma, cont_confirmada;
    int num_reserva[assentos_aviao], pessoas_reserva[assentos_aviao],idade_cli_reserva[assentos_aviao];
    int assento_reserva[assentos_aviao], reservados[assentos_aviao], confirmados[assentos_aviao], disponiveis[assentos_aviao];
    char fim_efetuar_reserva, nome_cli_reserva[assentos_aviao][100], vetor_assentos[assentos_aviao], situacao_reserva[assentos_aviao];
    char confirma_cancelamento, valida_confirmacao, sair_cancelada, sair_confirmada;
    float valor_passagem_reserva[assentos_aviao], valor_total_confirmadas=0, valor_reservas=0, aux_disponiveis;
	
		for(aux_assentos=1;aux_assentos<=assentos_aviao;aux_assentos++){
			vetor_assentos[aux_assentos] = 'D';
		}
	//system("pause");
    system("cls");
    
	
	do{ 
	    printf("***********************************************\n");
	    printf("*************SALUMAR LINHAS AEREAS*************\n");
	    printf("***********************************************\n\n\n\n");
	    printf("    MENU DE OPÇÕES\n\n\n");
	    printf("1 - VERIFICAR OCUPAÇÃO DOS VOOS\n\n");
	    printf("2 - EFETUAR RESERVA\n\n");
	    printf("3 - CANCELAR RESERVA\n\n");
	    printf("4 - CONFIRMAR RESERVA\n\n");
	    printf("5 - CONSULTAR RESUMO DO DESTINO\n\n\n");
	    printf("    INFORME A OPÇÃO DESEJADA: ");
	    scanf("%d", &menu_opcao_destino);
	   
	    system("cls");
	   
	    switch(menu_opcao_destino){
	    	case 1:
	    		
    			printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");
			    printf("    MAPA DE ASSENTOS\n\n");

			        for(aux_assentos=1;aux_assentos<=assentos_aviao;aux_assentos++){
				    	if(vetor_assentos[aux_assentos]=='D')
				    		printf(" %d-\033[32;1m%c\033[0m",aux_assentos,vetor_assentos[aux_assentos]);
				    		else
				    		if(vetor_assentos[aux_assentos]=='R')
				    			printf(" %d-\033[31;1m%c\033[0m",aux_assentos,vetor_assentos[aux_assentos]);
				    			else
				    				printf(" %d-\033[94;1m%c\033[0m",aux_assentos,vetor_assentos[aux_assentos]);
					}
											
			 ;break;
	    	case 2: 
				printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");	
				
				do{
					fflush(stdin);
					printf("INFORME O NOME DO PASSAGEIRO Nº %d: ", aux_reserva); // Cadastrando o passageiro na reserva
					fgets(nome_cli_reserva[aux_reserva],100,stdin);
					fflush(stdin);
						if(strlen(nome_cli_reserva[aux_reserva]) <= 6) // strlen: verifica o tamanho da string, se for menor ou igual a 6, apresenta o erro
							printf("\nNOME INVÁLIDO\n");	// apresenta texto na tela	
				}while(strlen(nome_cli_reserva[aux_reserva]) <= 6);// repetição quando o nome for menor que 5 caracteres
				
				do{	
					fflush(stdin);
					printf("\nINFOME A IDADE DO PASSAGEIRO Nº %d: ", aux_reserva);
					scanf("%d",&idade_cli_reserva[aux_reserva]);
					fflush(stdin);
						if(idade_cli_reserva[aux_reserva]<0)
							printf("\nIDADE INVÁLIDA\n");
				}while(idade_cli_reserva[aux_reserva]<0);
				
				do{	
					fflush(stdin);
					printf("\nINFOME O ASSENTO DO PASSAGEIRO Nº %d: ", aux_reserva);
					scanf("%d",&assento_reserva[aux_reserva]);
					fflush(stdin);
						if(assento_reserva[aux_reserva]<0 || assento_reserva[aux_reserva]>assentos_aviao)
							printf("\nASSENTO INVÁLIDO\n");
							else {
								if(vetor_assentos[assento_reserva[aux_reserva]]!='D')
									printf("\nASSENTO NÃO DISPONÍVEL\n");}
				}while((assento_reserva[aux_reserva]<0 || assento_reserva[aux_reserva]>assentos_aviao) || vetor_assentos[assento_reserva[aux_reserva]]!='D');
				
				// Altera a situação do assento para reservado
				
				vetor_assentos[assento_reserva[aux_reserva]]='R';
				
				// Altera a situação do reserva para ativa
				
				situacao_reserva[aux_reserva]='A';
				
				if(idade_cli_reserva[aux_reserva]<6)
					valor_passagem_reserva[aux_reserva] = valor_passagem/2;
					else
					valor_passagem_reserva[aux_reserva] = valor_passagem;
				
				printf("\n\nVALOR DA PASSAGEM DESTA RESERVA: R$ %.2f\n\n", valor_passagem_reserva[aux_reserva]);
				printf("CÓDIGO DA RESERVA: %d\n\n", aux_reserva);
								
				aux_reserva++;
				
				;break;
	    	case 3: 
				printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");
				
					do{	
						fflush(stdin);
						printf("\nINFOME O CÓDIGO DA RESERVA A SER CANCELADA: ");
						scanf("%d",&aux_canceladas);
						fflush(stdin);
						
							if(situacao_reserva[aux_canceladas]=='I')
								printf("\nRESERVA JÁ CANCELADA\n");
								else
									if(situacao_reserva[aux_canceladas]=='A' || situacao_reserva[aux_canceladas]=='C')
									break;
										else
										printf("\nRESERVA INEXISTENTE\n");
							
							printf("TENTAR NOVAMENTE?[S|N]\n");
							scanf("%c", &sair_cancelada);
							fflush(stdin);
							
							sair_cancelada = toupper(sair_cancelada);
							
								if(sair_cancelada=='N')
									break;
								
					}while(situacao_reserva[aux_canceladas]=='I' || (situacao_reserva[aux_canceladas]!='A' || situacao_reserva[aux_canceladas]!='C'));	
				
				if(sair_cancelada=='N')
					break;
				
				system("cls");
			
				printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");
			    
			    printf("      DADOS DA RESERVA N° %d\n\n\n", aux_canceladas);
			    
			    printf("Nome do passageiro: %s\n", nome_cli_reserva[aux_canceladas]);
			    printf("Idade do passageiro: %d\n", idade_cli_reserva[aux_canceladas]);
				printf("Assento do passageiro: %d\n\n", assento_reserva[aux_canceladas]);
				
				
				do{
					fflush(stdin);
					printf("CONFIRMA O CANCELAMENTO? [S|N]\n\n");
					scanf("%c", &confirma_cancelamento);
					
					confirma_cancelamento = toupper(confirma_cancelamento);
				
					if(confirma_cancelamento != 'S' && confirma_cancelamento != 'N')
						printf("\nOPÇÃO INVÁLIDA");
				}while(confirma_cancelamento != 'S' && confirma_cancelamento != 'N');
				
				if(confirma_cancelamento=='N')
					break;
				else{
					// Altera a situação da reserva para cancelada	
					situacao_reserva[aux_canceladas]='I';
					// Altera a situação do assento para disponível	
					vetor_assentos[assento_reserva[aux_canceladas]]='D';}
				
			;break;
	    	case 4: 
				printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");
				
					do{	
						fflush(stdin);
						printf("\nINFORME O CÓDIGO DA RESERVA A SER CONFIRMADA: ");
						scanf("%d",&aux_confirma);
						fflush(stdin);
							if(situacao_reserva[aux_confirma]=='I')
								printf("\nRESERVA CANCELADA\n");
								if(situacao_reserva[aux_confirma]=='A' || situacao_reserva[aux_confirma]=='C')
									break;
										else
										printf("\nRESERVA INEXISTENTE\n");
							
							printf("TENTAR NOVAMENTE?[S|N]\n");
							scanf("%c", &sair_confirmada);
							fflush(stdin);
							
							sair_confirmada = toupper(sair_confirmada);
							
								if(sair_confirmada=='N')
									break;
					}while(situacao_reserva[aux_confirma]=='I' || (situacao_reserva[aux_confirma]!='A' || situacao_reserva[aux_confirma]!='C'));	
				
				if(sair_confirmada=='N')
					break;
					
				system("cls");
			
				printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");
			
				printf("      DADOS DA RESERVA N° %d\n\n\n", aux_confirma);
			    
			    printf("Nome do passageiro: %s\n", nome_cli_reserva[aux_confirma]);
			    printf("Idade do passageiro: %d\n", idade_cli_reserva[aux_confirma]);
				printf("Assento do passageiro: %d\n\n", assento_reserva[aux_confirma]);
				
				
				do{
					fflush(stdin);
					printf("CONFIRMA A RESERVA? [S|N]\n\n");
					scanf("%c", &valida_confirmacao);
					
					valida_confirmacao = toupper(valida_confirmacao);
				
					if(valida_confirmacao != 'S' && valida_confirmacao != 'N')
						printf("\nOPÇÃO INVÁLIDA");
				}while(valida_confirmacao != 'S' && valida_confirmacao != 'N');
				
				if(valida_confirmacao=='N')
					break;
				else{
				// Altera a situação da reserva para confirmada
				situacao_reserva[aux_confirma]='C';
				// Altera a situação do assento para confirmada
				vetor_assentos[assento_reserva[aux_confirma]]='C';
				// Contador de reservas confirmadas
				cont_confirmada++;}
			
			;break;
	    	case 5: 
				printf("***********************************************\n");
			    printf("*************SALUMAR LINHAS AEREAS*************\n");
			    printf("***********************************************\n\n\n\n");
			    
			    printf("      RESUMO DO DESTINO - %s\n\n\n", nome_destino);
			    
			    for(int i=1;i<=aux_reserva;i++){
			    	
			    	if(situacao_reserva[i]=='A')
			    	
			    	valor_reservas = valor_reservas+valor_passagem_reserva[i];
			    	
			    		else
			    			if(situacao_reserva[i]=='C')
			    	
			    			valor_total_confirmadas = valor_total_confirmadas+valor_passagem_reserva[i];
				};
			
				aux_disponiveis = assentos_aviao - cont_confirmada -aux_reserva;
				
				printf("TOTAL DE PASSAGENS RESERVADAS: %d", aux_reserva);
				printf("\n\nTOTAL DE PASSAGENS CONFIRMADAS: %d", cont_confirmada);
				printf("\n\nTOTAL DE PASSAGENS DISPONÍVEIS: %d", aux_disponiveis);
				printf("\n\n\033[93;1mVALOR TOTAL DE PASSAGENS RESERVADAS: %.2f\033[0m", valor_reservas);
				printf("\n\n\033[92;1mVALOR TOTAL DE PASSAGENS CONFIRMADAS:%.2f\033[0m\n\n", valor_total_confirmadas);
				
				system("pause");			
			;break;
	    	default:printf("\nOPÇÃO INVÁLIDA\n");   	
	    };    
		
		do{
		fflush(stdin);
		printf("\n\n\n     DESEJA VOLTAR AO MENU DE OPÇÕES DO DESTINO?[S|N]\n\n\n");
		scanf("%c", &menu_destino_escolhido);
		fflush(stdin);
		
		menu_destino_escolhido = toupper(menu_destino_escolhido);
		
			if(menu_destino_escolhido != 'S' && menu_destino_escolhido != 'N')
				printf("\nOPÇÃO INVÁLIDA");
		}while(menu_destino_escolhido != 'S' && menu_destino_escolhido != 'N');
	
		system("cls");
	
	}while(menu_destino_escolhido=='S');
	
		system("cls");
		
	do{
		fflush(stdin);
		printf("\nDESEJA VERIFICAR OUTRO DESTINO?[S|N]\n");
		scanf("%c", &menu_princ);
		fflush(stdin);
		
		menu_princ = toupper(menu_princ);
		
			if(menu_princ != 'S' && menu_princ != 'N')
				printf("\nOPÇÃO INVÁLIDA");
	}while(menu_princ != 'S' && menu_princ != 'N');	
		
	system("cls");
	
}while(menu_princ=='S');

	system("cls");

	printf("***********************************************\n");
   	printf("*************SALUMAR LINHAS AEREAS*************\n");
   	printf("***********************************************\n\n\n\n");	
	printf("PROGRAMA FINALIZADO\n\n");
	
   return 0;
}
