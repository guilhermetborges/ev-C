#include <stdio.h>
void soma (float, float);
void sub (float, float);
void mult (float, float);
void div (float, float);
void menu ();

main (){
	menu();
}

void soma(float a, float b){
	float res = a+b;
	printf("\n%.1f + %.1f = %.1f\n",a,b, res);
}
void sub (float a, float b){
	float res = a-b;
	printf("\n%.1f - %.1f = %.1f\n",a,b, res);
}
void mult(float a, float b){
	float res = a*b;
	printf("\n%.1f + %.1f = %.1f\n",a,b, res);
}
void div(float a, float b){
	float res = a/b;
	printf("\n%.1f - %.1f = %.1f\n",a,b, res);
}
void menu (){
	float n1 = 8, n2 = 2;
	int aux;
	printf("\n1 - soma\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n\nDigite uma opcao: ");
	scanf("%d",&aux);
	
	switch(aux){
		case 1: 
			soma(n1, n2);
			break;
		case 2:
			sub(n1,n2);
			break;
		case 3: 
			mult(n1,n2);
			break;
		case 4:
			div(n1, n2);
			break;
		default:
			printf("\n\nopcao invalida!!!!\n\n");
	}
	
}
