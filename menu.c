#include <stdio.h>

void soma(){
	int num1,num2,resultado;
	printf("digite um numero: ");
	scanf("%d", &num1);
	printf("digite um numero: ");
	scanf("%d", &num2);
	resultado = num1 + num2;
	printf("%d + %d = %d\n",num1,num2,resultado);
}

void raizQ(){
	int num1,resultado;
	printf("digite um numero: ");
	scanf("%d", &num1);

	resultado = num1*num1;
	printf("%d X %d = %d\n",num1,num1,resultado);
}

main(){
	int opc;
	printf("\n1 - SOMA\n2 - MULTIPLICACAO\n3 -  FINALIZAR\nDigite a operacao que deseja:");
	scanf("%d", &opc);
	if(opc==1){
		soma();
	}else if(opc==2){
		raizQ();
	}else if(opc==3){
		printf("programa finalizado. ");
	}else{
		printf("opcao invalida tente novamente.");
	}
	while(opc!=3){
		printf("Digite a operacao que deseja:\n1 - SOMA\n2 - MULTIPLICACAO\n3 -  FINALIZAR\n ");
	scanf("%d", &opc);
	if(opc==1){
		soma();
	}else if(opc==2){
		raizQ();
	}else if(opc==3){
		break;
	}else{
		printf("opcao invalida tente novamente.");
	}
	}
}
