#include<stdio.h>
main(){	
    //Declaração de variável
	int idade;
	char nome[30];
	
	/*
	'1' - caractere	- char
	"1" - string	- char nome[20] 
	1   - inteiro   int numero
	*/
	
	printf("Digite os dados\n\n");
	
	printf("idade...: ");
	scanf("%d",&idade);//Leitura de um inteiro
	
	printf("NOME.: ");
	fflush(stdin);//Limpa a buffer do teclado
	gets(nome);
	

	printf("\n\n");
	printf("RESULTADO...\n\n");
	printf("RA....: %d\n",idade);
	printf("NOME..: %s",nome);
	printf("\n\n");
	
	if (idade >= 18){	
		printf("Voce pode tirar carteira!");
	}
	else{	
		printf("Voce não pode tirar carteira!");
	}
	
	printf("\n");	
	//  > , <, >=, <=, ==, !=	

}
