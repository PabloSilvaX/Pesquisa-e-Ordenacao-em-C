#include<stdio.h>
#include<stdlib.h>

/* 
String - conjunto de caracteres.
Vetor - Conjunto de variaveis do mesmo tipo.
se o tipo do vetor for caracter, então temos um conjunto de caracteres.

*/
main() {
/*
	char nome[20];	//String (vetor de char)
	char sexo;		//Caractere
	int idade;		//Inteiro
	float peso;		//Floar
*/

	char nome[20] = "Carlos";	//string
	char sexo = 'm';		//Caractere
	int idade = 14;		//Inteiro
	float peso = 50.7;		//Floar

	
	printf("Digite o nome: ");
	fflush(stdin); //limpar a buffer do teclado
	gets(nome); //gets so funciona para vetor de char (strings).
	
	printf("Digite o sexo: ");
	fflush (stdin);
	sexo = getchar(); // getchar para caractere
	
//	gets(nome[10]);
//	nome[10] = getchar();
	
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	printf("Digite o peso: ");
	scanf("%f",&peso);
	
	printf("\n\nDADOS CADASTRADOS\n\n");
	
	printf("Nome = %s\n", nome);
	printf("Sexo = %c\n", sexo);
	printf("Idade = %d\n", idade);
	printf("Peso = %.2f\n", peso);

	system("pause");
}


/*
1 inteiro
1.0 real
'1' caractere
"1" string (palavra, texto ou frase)
*/
