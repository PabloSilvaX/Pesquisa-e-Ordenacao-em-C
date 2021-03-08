#include<stdio.h>
main(){	
    //Declaração de variável
	int ra;
	char nome[30];
	float nota_num;
	char nota_letra;
	
	/*
	'1' - caractere	- char
	"1" - string	- char nome[20] 
	1   - inteiro   int numero
	*/
	
	printf("Digite os dados\n\n");
	
	printf("RA...: ");
	scanf("%d",&ra);//Leitura de um inteiro
	
	printf("NOME.: ");
	fflush(stdin);//Limpa a buffer do teclado
	gets(nome);
	
	printf("NOTA NUMERICA.: ");
	scanf("%f",&nota_num);
	
	printf("NOTA LETRA....: ");
	fflush(stdin);//Limpa a buffer do teclado
	nota_letra = getchar();	
	
	printf("\n\n");
	printf("RESULTADO...\n\n");
	printf("RA....: %d\n",ra);
	printf("NOME..: %s",nome);
	printf("\n\n");
	
	if (nota_num >= 5){	
		printf("Voce esta aprovado!");
	}else{
		printf("Voce esta reprovado!");
	}	
	printf("\n");	
	//  > , <, >=, <=, ==, !=	
	if (nota_letra=='A'){
		printf("Seu resultado foi excelente!!!");
	}else if (nota_letra=='B'){
		printf("Seu resultado foi bom!!!");
	}else if (nota_letra=='C'){
		printf("Seu resultado foi regular!!!");
	}else if (nota_letra=='D'){
		printf("Seu resultado foi ruim!!!");
	}else if (nota_letra=='E'){
		printf("Seu resultado foi muito ruim!!!");
	}else if (nota_letra=='F'){
		printf("Seu resultado foi pessimo!!!");
	}else{		
		printf("Houve um erro ao digitar a letra da nota!");
	}
}
