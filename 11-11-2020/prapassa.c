#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <string.h>

struct  Aluno{
	double ra;
	char nome[50];
	struct Aluno *anterior;
};

struct Aluno *al_atual = NULL;

struct Aluno *al_maior = NULL;
struct Aluno *al_menor;

void cadastrar(){
	printf("1 - Cadastro----------\n\n");
	struct Aluno *al_anterior = al_atual;
	al_atual = (struct Aluno *) malloc(sizeof(struct Aluno));
	al_atual->anterior = al_anterior;
	
	printf("Digite o RA..: ");
	scanf("%lf",&al_atual->ra);
	
	printf("Digite o Nome: ");
	fflush(stdin);
	gets(al_atual->nome);
	
	printf("Dados cadastrados com sucesso!");
}

void consultar(){
	printf("2 - Consultar----------\n\n");
	double ra;
	printf("Digite o RA pra consultar: ");
	scanf("%lf",&ra);
	
	struct Aluno *al_atual_aux = al_atual;
	struct Aluno *al_prox = al_atual_aux;
	while(al_atual_aux!=NULL){
		if (al_atual_aux->ra==ra){
			break;
		}
		al_prox      = al_atual_aux;
		al_atual_aux = al_atual_aux->anterior;
	}
	if (al_atual_aux==NULL){
		if (al_atual==NULL){
			printf("A lista esta vazia!");
		}else{
			printf("RA nao encontrado!");
		}
	}else{
		printf("\nDados encontrados:\n");
		printf("RA...: %.0lf\n", al_atual_aux->ra);
		printf("NOME.: %s\n\n", al_atual_aux->nome);
		printf("O que deseja fazer:\n");
		printf("1 - Alterar\n");
		printf("2 - Excluir\n");
		printf("3 - voltar\n");
		printf("Digite a opcao: ");
		int opcao;
		scanf("%d",&opcao);
		printf("\n");
		switch(opcao){
			case 1:
				printf("Digite os novos dados:\n");
				printf("RA...: ");
				scanf("%lf",&al_atual_aux->ra);
				printf("NOME.: ");
				fflush(stdin);
				gets(al_atual_aux->nome);
				printf("Dados alterados com sucesso!");
				break;
			case 2: 
				if (al_atual_aux==al_atual){
					al_atual = al_atual->anterior ;
				}else{
					al_prox->anterior = al_atual_aux->anterior;
				}
				free(al_atual_aux);	
				printf("Excluido com sucesso!");
			
				break;
			case 3: return;
			default: printf("Opcao invalida!");
		}
	}
}

void listar_todos(){
	printf("3 - Listar todos----------\n\n");
	
	struct Aluno *al_atual_aux = al_atual;
	while(al_atual_aux!=NULL){
		printf("RA....: %.0lf\n",al_atual_aux->ra);
		printf("NOME..: %s\n",al_atual_aux->nome);
		printf("----------\n");
		al_atual_aux = al_atual_aux->anterior;
	}

}


void buscar_por_nome(){
	printf("3 - Buscar por Nome----------\n\n");
	char nome[200];
	printf("Digite o Nome: ");
	fflush(stdin);
	gets(nome);
	
	
	struct Aluno *al_atual_aux = al_atual;
	struct Aluno *al_prox = al_atual_aux;
	
	printf("\n");
	while(al_atual_aux!=NULL){
	if (strstr(al_atual_aux->nome, nome)!=NULL){ 
				printf("%s\n",al_atual_aux->nome);
			
			
			}
		al_prox      = al_atual_aux;
		al_atual_aux = al_atual_aux->anterior;
	}
	

}	

void excluir_todos(){
	printf("6 - Excluir todos\n\n");
	
}

void exibir_maior_menor(){
	printf("7 - Exibir o maior e o menor nome cadastrado\n\n");
	
	
	struct Aluno *al_atual_aux = al_atual;
	
	int tamanho_maior;
	int tamanho_menor = strlen(al_atual_aux->nome);	
		
		int opcao;	
		printf("Digite oque deseja buscar:\n");
		printf("1 - Maior nome\n");
		printf("2 - Menor nome\n\n");
		
		scanf("%d",&opcao);
		switch(opcao){
			case 1:
						
		
		
	while(al_atual_aux!=NULL){
		
		
		int tamanho_atual = strlen(al_atual_aux->nome);
		
	
		
		if(tamanho_atual>=tamanho_maior){
			tamanho_maior = tamanho_atual;
			al_maior = al_atual_aux->nome;
		}
		
		
		al_atual_aux = al_atual_aux->anterior;
		
	
	} 
	
		printf("\nNome do maior: %s",al_maior);	
		printf("\nQuantidade de caracteres do Maior: %d",tamanho_maior);

		
		break;
		
			case 2: 
			
					
	while(al_atual_aux!=NULL){
		
		
		int tamanho_atual = strlen(al_atual_aux->nome);
		
	
		
		if(tamanho_menor>tamanho_atual){
			tamanho_menor = tamanho_atual;
			al_menor = al_atual_aux->nome;
		}
		
		
		al_atual_aux = al_atual_aux->anterior;
		
	
	} 
	
		printf("\nNome do menor: %s",al_menor);	
		printf("\nQuantidade de caracteres do Menor: %d",tamanho_menor);

		
			
			
			break;
		default: printf("Opcao invalida!");	
	}
		

	
}
	

main(){
	int opcao;
	
	do{
		system("cls");
		printf("#### SISTEMA DE GERENCIAMENTO DE ALUNOS ####\n\n");
		
		printf("1 - Cadastrar aluno\n");
		printf("2 - Consultar\n");
		printf("3 - Listar todos\n");
		printf("4 - Sair\n\n");
		
		printf("5 - Buscar por nome (completo ou uma parte do nome)\n");
		printf("6 - Excluir todos\n");
		printf("7 - Exibir o maior e o menor nome cadastrado\n\n");
		
		printf("Digite a opcao: ");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao){
			case 1: cadastrar();          break;
			case 2: consultar();          break;
			case 3: listar_todos();       break;
			case 4: printf("Saindo...");  break;
			case 5: buscar_por_nome();    break;
			case 6: excluir_todos();      break;
			case 7: exibir_maior_menor(); break;
			default:
				printf("Opcao invalida!");
		}
		fflush(stdin);
		getch();
	}while(opcao!=4);
		
}

