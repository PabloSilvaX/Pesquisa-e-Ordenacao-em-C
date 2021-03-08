#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>

struct Chaves{
	char nome[40];
	int idade;
};
main(){
	struct Chaves turma[8];
	char nome[40];
	
	strcpy(turma[0].nome,"chaves");
	strcpy(turma[1].nome,"kiko");
	strcpy(turma[2].nome,"madruguinha");
	strcpy(turma[3].nome,"chiquinha");
	strcpy(turma[4].nome,"florinda");
	strcpy(turma[5].nome,"girafales");
	strcpy(turma[6].nome,"nhonho");
	strcpy(turma[7].nome,"jaiminho");
	
	do{
		system("cls"); // limpa tela
		printf("TURMA DO CHAVES\n\n"); // texto
		printf("Digite o nome para localizar: "); //texto
		fflush(stdin); //limpa buffer do teclado
		gets(nome); // Pede ao usuário que entre uma string
		int i=0,reg_enc=0; //variaveis i = vai servir pra parar o processo qnd passar de 7, reg_enc para quantidade de registros encontrados
		printf("\n"); //texto
		
		while(i<=7){
			if (strstr(turma[i].nome, nome)!=NULL){ //A função strstr devolve um ponteiro para a primeira ocorrência da string apontada por endereçoStrChave na string apontada por endereçoStrOrigem
				printf("%s\n",turma[i].nome);
				reg_enc++;
			}
			i++;
		}
		printf("\n");
		printf("%d registro(s) encontrado(s)",reg_enc);
		fflush(stdin);
		getch();
		
	}while(strcmp(nome,"sair")!=0);
	
}
