#include<stdio.h>

int mensagem(int numero){
	printf("%d\n",numero);
	if (numero<=3){
		numero +=1;
		mensagem(numero);
	}
	printf("%d\n",numero);
}

main(){
	mensagem(2);
}
 
