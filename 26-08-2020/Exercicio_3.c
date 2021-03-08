#include<stdio.h>
main(){
	char nome[20];
	int media;
	int faltas;
	
	printf("Cadastro 1....\n");
	printf("NOME1: ");
	fflush(stdin);
	gets(nome);
	
	printf("MEDIA: ");
	scanf("%f",&media);
	
	printf("FALTAS: ");
	scanf("%f",&faltas);
		
	if (6 <= media && faltas <= 18){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
}
