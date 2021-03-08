#include<stdio.h>
#include<conio.h>
//ponteiros = é uma variavei que guarda o endereço de outra variavel.
main(){
	
	int a=7;
	int *q;
	int **d;
	int ***w;
	int ****r;
	int ***** p;
	
	p = &r;
	r = &w;
	w = &d;
	d = &q;
	q = &a;
		
	***p => d;

	printf("O valor de A e = %d",**c);
getch();
}
