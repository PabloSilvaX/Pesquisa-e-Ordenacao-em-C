#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct Veiculo{
	char placa[9];
	int ano;
	float motor;
	struct Veiculo *anterior;
};

main(){
	struct Veiculo *atual = NULL;
	int opcao;
	char placa[9];
	
	do{
		system("cls");
		printf("### Uni9CAR ###\n\n");
		printf("1 - Cadastrar veiculo\n");
		printf("2 - Exibir veiculos cadastrados\n");
		printf("3 - Consultar veiculo\n");
		printf("5 - Sair\n\n");
		printf("Opcao: ");
		scanf("%d",&opcao);
		if (opcao==1){
			printf("Cadastre os dados abaixo...\n");
			
			struct  Veiculo *atual_aux = atual;
			atual = (struct Veiculo *) malloc(sizeof(struct Veiculo));
			atual->anterior = atual_aux;
			
			printf("PLACA.: ");
			fflush(stdin);
			gets(atual->placa);
			printf("ANO...: ");
			scanf("%d",&atual->ano);
			printf("MOTOR.: ");
			scanf("%f",&atual->motor);
			
		}else if (opcao==2){
			printf("Os seguintes dados foram cadastrados:\n");
			
			struct  Veiculo *atual_aux = atual;
			int i=1;
			while(atual_aux!=NULL){
				printf("CARRO %d\n",i);
				printf("Placa = %s\n",atual_aux->placa);
				printf("Ano   = %d\n",atual_aux->ano);
				printf("Motor = %f\n",atual_aux->motor);
				printf("-----------\n");
				atual_aux = atual_aux->anterior;
				i++;
			}
		}else if (opcao==3){
			printf("Digite a placa do veiculo: ");
			fflush(stdin);
			gets(placa);
			
			
		}else if (opcao==5){
			printf("Saindo...");
			break;
		}
		getch();
	}while(1);
}
