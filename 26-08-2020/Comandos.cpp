#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){

/*
int - %d (Numero inteiro
float - %f (Numeros reais)
char - %c (caracteres simbolos letras e numeros)
vetor de char - %s (string, palavas texto)
\n = enter
*/

	int n1, n2, resultado;
	
	setlocale (LC_ALL,"Portuguese");
	//Permite o uso de acentos indica que a linguagem e em portugues
	printf("Digite um número: ");
	//exibe a mensagem na tela
	scanf("%d",&n1);
	//Entrada de dados do usuario (permite que ele digite o valor para o dado)
	printf("Digite outro número: ");
	//Exibe mensagem na tela
	scanf("%d",&n2);
	//Entrada de dados do usuario (permite que ele digite o valor para o dado)
	resultado = n1 + n2;
	//Realiza o calculo e adiciona o valor a resposta
	printf("A soma de %d com %d é %d",n1,n2,resultado);
	//Exibe na tela
	system("pause>>null");
	//Pausa o programa para que ele não feche (null deixa sem mensagem de pausa)
}
