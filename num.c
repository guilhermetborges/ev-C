#include <stdio.h>
main(){
	int num,conta = 0,soma = 0,maior,menor;
	float media;
	
	printf("digite um numero qualquer: \n(0 para finalizar)\n");
	scanf("%d", &num);
	
	if (num != 0){
		maior = menor= num;
	}
	
	while(num != 0){
		soma += num;
		conta++;
		
		if (num > maior){
			maior = num;
		}
		if(num < menor){
			menor = num;
		}
		printf("digite um numero qualquer: \n(0 para finalizar)\n");
		scanf("%d", &num);
	}
	media = (float)soma/conta;
	if(conta != 0){
		printf("\nQuantidade de numero digitados: %d\n",conta);
		printf("somatorio desses numeros: %d\n",soma);
		printf("O maior numero foi: %d\nO menor numero foi: %d\n",maior,menor);
		printf("A media dos numeros digitados foi: %.2f",media);
	}else{
		printf("\nNenhum numero foi digitado.");
	}
}
