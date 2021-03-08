#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

main(){
	int *id1, *id2;
	printf("Digite a idade1: ");
	id1 = (int*) malloc(sizeof(int));
	scanf("%d",id1);
	
	printf("Digite a idade2: ");
	id2 = (int*) malloc(sizeof(int));
	scanf("%d",id2);
	
	printf("A soma das idades e %d",(*id1)+(*id2));
	getch();
}

