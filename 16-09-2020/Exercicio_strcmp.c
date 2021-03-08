#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

main(){
	int opcao;
	do{
		system("cls");
		printf("Exemplo de algoritmos usando IF:\n\n");
		printf("1 - Validacao de usuario e senha\n");
		printf("2 - Determinar o estatus do IMC\n");
		printf("3 - Informar se um numero e par ou impar\n");
		printf("4 - Determinar o triangulo - (Equilatero,Isoscele,Escaleno)\n");
		printf("5 - Determinar se o nome comeca com vogal ou consoante\n");
		printf("6 - Sair\n\n");
		
		printf("Opcao: ");
		scanf("%d",&opcao);
		
		if (opcao==1){
			char usuario[20], senha[20];
			printf("\nLOGIN UNINOVE\n\n");
			
			printf("Usuario: ");
			fflush(stdin);//Limpa a buffer do teclado
			gets(usuario);
			
			printf("Senha..: ");
			fflush(stdin);//Limpa a buffer do teclado
			gets(senha);
			
			if (strcmp(usuario,"aluno")==0 && strcmp(senha,"uninove")==0){
				printf("Acesso autorizado!!!");
			}else{
				printf("Acesso negado!!!");
			}		
			
		}else if (opcao==2){
			float peso, altura, imc;
			
			printf("\nSTATUS IMC\n\n");		
			
			printf("Peso..: ");
			scanf("%f",&peso);
			
			printf("Altura: ");
			scanf("%f",&altura);
			
			imc = peso / pow(altura,2);
			printf("Seu IMC e %.2f, seu STATUS e: ",imc);
			
			if (imc<18.5){
				printf("Abaixo do peso");
			}else if (imc>=18.5 && imc<25){		
				printf("Peso normal");
			}else if (imc>=25 && imc<30){	
				printf("Sobrepeso");
			}else if (imc>=30 && imc<35){	
				printf("Obesidade grau I");		
			}else if (imc>=35 && imc<40){	
				printf("Obesidade grau II");
			}else if (imc>=40){	
				printf("Obesidade grau III ou morbida");
			}
			
		}else if (opcao==3){
			int num;
			printf("\nNUMERO E PAR OU IMPAR\n\n");		
			printf("Digite um numero: ");
			scanf("%d",&num);
			
			if (num % 2 == 0){
				printf("O numero %d e par",num);
			}else{
				printf("O numero %d e impar",num);
			}
		
		}else if (opcao==4){	
		
		    int lado1,lado2,lado3;	    
			printf("\nTIPO DE TRIANGULO\n\n");
			printf("Tamanho lado 1: ");
			scanf("%d",&lado1);
			printf("Tamanho lado 2: ");
			scanf("%d",&lado2);
			printf("Tamanho lado 3: ");
			scanf("%d",&lado3);
			/*
			OPERADORES LÓGICOS
			&& (OPERADOR E)
			|| (OPERADOR OU)
			!  (OPERADOR NÃO)
					
			OPERADORES RELACIONAIS
			==(igual), !=(diferente)
			>(maior), <(menor)
			>=(maior ou igual), <=(menor ou igual)
			*/
			
			if (lado1==lado2 && lado2==lado3){
				printf("\nResultado: Triangulo Equilatero, 3 lados iguais");
			}else if (lado1==lado2 || lado1==lado3 || lado2==lado3){
				printf("\nResultado: Triangulo Isoscele, 2 lados iguais");
			}else if (lado1!=lado2 && lado1!=lado3 && lado2!=lado3){
				printf("\nResultado: Triangulo Escaleno, 3 lados diferentes");	
			}
			
		}else if (opcao==5){	
		    char nome[20];
			printf("PRIMEIRA LETRA DO NOME - VOGAL OU CONSOTANTE?\n\n");
			printf("Digite o nome: ");
			fflush(stdin);
			gets(nome);
			
			if (nome[0]=='a'||nome[0]=='e'||nome[0]=='i'||nome[0]=='o'||nome[0]=='u'){
				printf("A primeira letra do nome %s e uma vogal", nome);			
			}else{
				printf("A primeira letra do nome %s e uma consoante", nome);			
			}
		
		}else if(opcao==6){
			printf("Saindo....\n");
		}else{
			printf("Opcao invalida!");
		}		
		
		printf("\n");
		system("pause");
	}while(opcao!=6);
	
	
}
