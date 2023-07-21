#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#define N 50
int main (){
	setlocale(LC_ALL, "PORTUGUESE");
	
	int somaCartaJogador, somaCartaCPU;
	int vetor[2];
	int numeroContador, cartaJogador, cartaCPU, decisao, novaCartaJogador, totalCartaJogador;
	char nome[N], enter[N];
	char resposta;
	
	
	printf ("----------------------------------------------------------------------------------\n");
	printf ("------------------------ C A S S I N O   W E R E W O L F -------------------------\n");
	printf ("----------------------------------------------------------------------------------\n");
	printf ("\n");
	printf ("Olá apostador, seja bem vindo ao Cassino Werewolf.\n");
	printf ("Poderia nos informar seu nome?\n");
	scanf ("%49[^\n]s", nome);
	printf ("\n");
	fflush (stdin);
	
	
	printf ("\n");
	printf ("Prazer em conhece-lo %s!\n", nome);
	printf ("O jogo que jogaremos � o BlackJack ou de forma mais simples 21!\n");
	printf ("Aquele que tiver a maior soma de cartas ou completar 21 ganha.\n");	
	printf ("Simples não é mesmo?\n");
	printf ("\n");
	printf ("Então vamos começa %s!\n", nome);
	printf ("Aperte qualquer tecla e aperte enter\n");
	scanf ("%s", enter);
	fflush(stdin); 
	
	system ("cls");
	
	do {
		printf ("----------------------------------------------------------------------------------\n");
		printf ("------------------------ C A S S I N O   W E R E W O L F -------------------------\n");
		printf ("----------------------------------------------------------------------------------\n");
		printf ("\n");
		printf ("Vocé começa %s, vou retirar suas cartas!\n", nome);
	
		srand (time(NULL));
		somaCartaJogador = 0;
		for (numeroContador = 0; numeroContador < 2; numeroContador ++){
		cartaJogador = rand () % 10 + 1;
		vetor[numeroContador] = cartaJogador;
		somaCartaJogador = somaCartaJogador + vetor[numeroContador];
		}

		for (numeroContador = 0; numeroContador < 2; numeroContador ++){
		printf ("Saiu a carta [%d]\n", vetor[numeroContador]);
		}

		printf ("\n");
		printf ("Totalizando [%d]\n", somaCartaJogador);
		printf ("\n");
		printf ("Deseja continuar?\n");
		printf ("[1]- SIM [2]-NÃO\n");
		scanf ("%d", &decisao);
		printf ("\n");
		fflush(stdin);
	
		if (decisao == 1){
		novaCartaJogador = rand () % 10 + 1;
		printf ("Saiu a carta [%d]\n", novaCartaJogador);
		totalCartaJogador = somaCartaJogador + novaCartaJogador;
		printf ("\n");
		printf ("Totalizando [%d]\n", totalCartaJogador);
		printf ("\n");
			if (totalCartaJogador == 21){
				printf ("NOSSA QUE PERFEITO!!! VOCÊ CRAVOU O 21!!!\n");
			}
			else{
				if (totalCartaJogador > 21){
					printf (" Infelizmente você estourou!\n");
					printf ("Eu sinto muito!\n");
				}	
			}
		}
		else{
			if (decisao == 2){
			totalCartaJogador = somaCartaJogador;
			printf ("Tudo bem %s, você totalizou com [%d]\n", nome, totalCartaJogador);
			} 
		}
		printf ("\n");
		printf ("Aperte qualquer tecla e aperte enter\n");
		scanf ("%s", enter);
		fflush(stdin);
		system ("cls");
	
		printf ("----------------------------------------------------------------------------------\n");
		printf ("------------------------ C A S S I N O   W E R E W O L F -------------------------\n");
		printf ("----------------------------------------------------------------------------------\n");
		printf ("\n");
		printf ("Agora é a vez da casa!\n");
	
		somaCartaCPU = 0;
		for (numeroContador = 0; numeroContador <= 2; numeroContador ++){
		cartaCPU = rand () % 10 + 1;
		vetor[numeroContador] = cartaCPU;
		somaCartaCPU = somaCartaCPU + vetor[numeroContador];
		}
		for (numeroContador = 0; numeroContador <= 2; numeroContador ++){
		printf ("Saiu a carta [%d]\n", vetor[numeroContador]);
		}
		fflush(stdin);
		printf ("\n");
		printf ("Totalizando [%d]\n", somaCartaCPU);
		printf ("\n");
	
		if (somaCartaCPU > 21){
			printf ("Casa estourou o valor maximo!\n");
		}
		else{
			if (somaCartaCPU == 21){
				printf ("A casa realizou um belo jogo!\n");
			}
		}
		printf ("\n");
		printf ("Aperte qualquer tecla e aperte enter\n");
		scanf ("%s", enter);
		fflush(stdin);
	
		system ("cls");
	
		printf ("----------------------------------------------------------------------------------\n");
		printf ("-------------------------- P L A C A      F I N A L ------------------------------\n");
		printf ("\n");
		printf ("---------------- %s [%d]           X          [%d] Croupier ------------------\n", nome, totalCartaJogador, somaCartaCPU);
		printf ("\n");
	
		if (totalCartaJogador > 21){
			totalCartaJogador = 0;
		}
		if (somaCartaCPU > 21){
			somaCartaCPU = 0;
		}
		if (totalCartaJogador > somaCartaCPU){
			printf ("Parabéns %s, você me ganhou no jogo!\n", nome);
			printf ("Espero que tenha se divertido muito!\n");		
		}
		printf ("\n");
		printf("Você quer continuar jogando %s?\n", nome);
		printf("[S]-SIM   [N]-NÃO\n");
    	scanf(" %c", &resposta);
    	fflush(stdin);
    	printf ("\n");
    	printf ("Aperte qualquer tecla e aperte enter\n");
		scanf ("%s", enter);
		fflush(stdin);
	
		system ("cls");
	} 
	while (resposta != 'n' && resposta != 'N');
		
	printf ("Tudo Bem então %s, nos vemos por ai! \n", nome);
	printf ("\n");
	printf ("F I M   D O   J O G O!");
	
}
