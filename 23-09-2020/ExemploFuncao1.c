#include <stdio.h>

char * string(){
	return "Maria";
}
char caractere(){
	return 'a'
}
float real(){
	return 1.5;
}
int inteiro(){
	return 8;
}
void mensagem(){ //quando n quer retorno
	printf("Fim do programa");
}
main(){
	printf("String	= %s\n",string());
	printf("Caractere	= %c\n",caractere());
	printf("Float	= %f\n",real());
	printf("Inteiro	= %d\n",inteiro());
}
