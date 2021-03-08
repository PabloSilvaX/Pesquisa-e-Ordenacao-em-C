#include<stdio.h>
#include<stdlib.h>
//#include<local
mais() {
	char nome[20];	//String
	char sexo;		//Caractere
	int idade;		//Inteiro
	float peso;		//Floar
	
	printf("Digite o nome: ");
	fflush(stdin);
	gets(nome);
	
	printf("Digite o sexo: ");
	//limpa buffer do teclado
	fflush (stdin);
	sexo = getchar();
	
	printf("Digite a idade: ");
	scanf("%d",&idade);
	
	printf("Digite o peso: ");
	scanf("%f",&peso);
	
	printf("/n/nDADOS CADASTRADOS/n/n");
	
	printf("Nome = %s/n", nome);
	printf("Sexo = %c/n", sexo);
	printf("Idade = %d/n", idade);
	printf("Peso = %f/n", peso);

	system("pause");
}


/*
1 inteiro
1.0 real
'1' caractere
"1" string (palavra, texto ou frase)
*/
