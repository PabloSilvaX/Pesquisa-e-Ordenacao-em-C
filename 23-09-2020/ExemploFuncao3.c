#include<stdio.h>

int mensagem(int numero){
	if (numero>2){
		printf("%d",numero--);
		mensagem(numero);
	}
	printf("%d",numero);
	
}
main(){
	mensagem(4);
}
