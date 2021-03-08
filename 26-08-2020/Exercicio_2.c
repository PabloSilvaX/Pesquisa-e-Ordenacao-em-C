#include<stdio.h>
main(){
	char nome1[20], nome2[20];
	float peso1, peso2;
	
	printf("Cadastro 1....\n");
	printf("NOME1: ");
	fflush(stdin);
	gets(nome1);
	printf("PESO1: ");
	scanf("%f",&peso1);
	printf("\nCadastro 2....\n");
	printf("NOME2: ");
	fflush(stdin);
	gets(nome2);
	printf("PESO2: ");
	scanf("%f",&peso2);	
	
	if (peso1>peso2){
		printf("%s e mais pesado que %s",nome1,nome2);
	}else if (peso2>peso1){
		printf("%s e mais pesado que %s",nome2,nome1);
	}else{
		printf("%s tem o mesmo peso de %s",nome1,nome2);
	}	
}
