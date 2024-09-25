#include <stdio.h>

int ehprimo(int num);
void leiavet(int vet[],int tamanho);
void escrevavet(int vet[],int tamanho);
void vetEHprimo(int vet[],int tamanho);

main(){
	int vet[10],vetPrimo[10];
	printf("vetor: |");
	leiavet(vet,10);
	escrevavet(vet,10);
	printf("\nPrimos no vetor: |");
	vetEHprimo(vet,10);
	
}


int ehprimo(num){
	int i;
	if(num == 0 || num == 1 ){
		return 0;
	}
	if(num ==2){
		return num;
	}
	for(i = 2;i*i<=num;i++){
		if(num%i==0){
			return 0;
		}
	}
	return num;
}
		


void leiavet(int vet[],int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf("digite o numero %d: ",i+1);
		scanf("%d",&vet[i]);
	}
}

void escrevavet(int vet[],int tamanho){
	int i;
	for(i=0;i<tamanho;i++){
		printf(" %d |",vet[i]);
	}
	
}


void vetEHprimo(int vet[],int tamanho){
	int i;
	
	for(i=0;i<tamanho; i++){
		if(ehprimo(vet[i])){
			printf(" %d |",vet[i]);
		}
	}
}
















