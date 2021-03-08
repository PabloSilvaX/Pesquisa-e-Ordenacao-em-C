#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){


	float lado, area;
	
	setlocale (LC_ALL,"Portuguese");
	printf("Digite o lado: ");
	scanf("%f",&lado);
	area = lado * lado;
	printf("O valor da área é %.2f cm",area);
	system("pause>>null");
}
