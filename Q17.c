#include <stdio.h>
void leiavet(int vet[10]);
void escrevavet0neg(int vet[10]);


main(){
	int vet[10];
	leiavet(vet);
	escrevavet0neg(vet);
}

void leiavet(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		printf("digite um numero para a posicao %d: ",i+1);
		scanf("%d",&vet[i]);
	}
}

void escrevavet0neg(int vet[10]){
	int i;
	for(i=0;i<10;i++){
		if(vet[i] < 0){
			vet[i] = 0;
		}
		printf("%d | ",vet[i]);
	}
}
