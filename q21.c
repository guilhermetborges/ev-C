#include <stdio.h>

/*
Fac¸a um programa que receba do usuario dois vetores, ´ A e B, com 10 numeros inteiros ´
cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados
do vetor C
*/

void leiavet(int vet[10]);
void escrevavet(int vet[10]);


main(){
	int vetA[10] ,vetB[10],vetC[10],i;
	leiavet(vetA);
	printf("\n");
	escrevavet(vetA);
	printf("\n");

	leiavet(vetB);
	printf("\n");

	escrevavet(vetB);
	printf("\n");


	for(i=0;i<10;i++){
		vetC[i] = vetA[i] - vetB[i];
		printf("%d | ",vetC[i]);
	}
	
}

void leiavet(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		printf("\ndigite um numero para a posicao %d: ",i+1);
		scanf("%d",&vet[i]);
	}
}

void escrevavet(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		
		printf("%d | ",vet[i]);
	}
}
