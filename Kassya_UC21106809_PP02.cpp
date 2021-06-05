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

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main(){
   setlocale(LC_ALL,"Portuguese");
   
   char nome_destino[50];
   int assentos_aviao;
   
   printf("***********************************************\n");
   printf("*************SALUMAR LINHAS AEREAS*************\n");
   printf("***********************************************\n\n\n\n");
   printf("    INFORME O NOME DO DESTINO\n\n");
   fgets(nome_destino, 50, stdin);
   fflush(stdin);
   
   system("cls");
   
   printf("***********************************************\n");
   printf("*************SALUMAR LINHAS AEREAS*************\n");
   printf("***********************************************\n\n\n\n");
   printf("    INFORME A QUANTIDADE DE ASSENTOS DO AVIÃO\n\n");
   scanf("%d", &assentos_aviao);
   fflush(stdin);
   
   system("cls");
   
   int matriz_assentos[assentos_aviao];
   
   printf("***********************************************\n");
   printf("*************SALUMAR LINHAS AEREAS*************\n");
   printf("***********************************************\n\n\n\n");
   printf("    MENU DE OPÇÕES");
   printf("1 - VERIFICAR OCUPAÇÃO DOS VOOS\n\n");
   printf("2 - EFETUAR RESERVA\n\n");
   printf("3 - CANCELAR RESERVA\n\n");
   printf("4 - CONFIRMAR RESERVA\n\n");
   printf("5 - CONFIRMAR RESERVA\n\n");
   
       
   
   
   return 0;
}
