#include <stdio.h>

void leiavet(int vet[],int tamanho);
void escrevavet(int vet[],int tamanho);

main(){
	int vet[10],i,j;
	leiavet(vet,10);
	escrevavet(vet,10);
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			if(vet[i]==vet[j]){
				printf(" %d |",vet[j]);
				break;
			}
		}
	}
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
	

