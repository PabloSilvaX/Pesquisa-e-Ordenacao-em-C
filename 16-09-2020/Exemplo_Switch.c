#include<stdio.h>

main(){
	int opcao;
	
	printf("Bem vindo a calculadora");
	printf("1 - Somar \n");
	printf("2 - Subtrair \n");
	printf("3 - Dividir \n");
	printf("4 - Multiplicar \n");
	printf("5 - sair \n");	
	printf("Opção: ");
	scanf("%d",&opcao);
	switch(opcao){
		
	case 1: 
	printf("Voce escolheu Somar !!!\n");
	break;
	
	case 2: 
	printf("Voce escolheu Subtrair !!!\n");
	break;
	
	case 3: 
	printf("Voce escolheu Dividir !!!\n");
	break;
	
	case 4: 
	printf("Voce escolheu Multiplicar !!!\n");
	break;
	
	case 5: 
	printf("Voce escolheu Sair !!!\n");
	break;
	
	default: printf("Opcao invalida !!!\n");
}

	}
