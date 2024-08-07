#include <stdio.h>

main(){
	int numero,i,cont_resto = 0,contPrimos,soma = 0,j,quantidade;
	
	printf("quantas vezes voce quer saber os numeros primos: \n");
	scanf("%d",&quantidade);
	
	for(j = 0; j<=quantidade;j++){
		printf("digite um numero: ");
		scanf("%d",&numero);
		
		
		cont_resto=0;
		for(i = 1; i<= numero;i++){
			if(numero%i==0){
				cont_resto++;
			}
		}
		
		if(cont_resto == 2){
			printf("0 numero %d eh primo\n",numero);
			contPrimos++;
			soma += numero;
		}else{
			printf("o numero %d NAO eh primo\n", numero);
		}
	}
	
	if(contPrimos > 0){
		printf("\nquantidade de numeros primos: %d\nsomade todos os numeros primos: %d\nMedia dos numeros primos: %d",contPrimos,soma,soma/contPrimos);
	}else{
		printf("\nNao tem numero primo.");
	}
}
