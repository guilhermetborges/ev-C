#include <stdio.h>

void ordem(int vet[],int num){
	int i,j,temp;
	for(i=0;i<num-1;i++){
		for(j=0;j< num-i-1;j++){
			if(vet[j]>vet[j+1]){
				temp=vet[j];
				vet[j]=vet[j+1];
				vet[j+1]= temp;
			}
		}
	}
}



main(){
	int vet[8],num,i,j,aux;
	
	printf("digite 8 numeros\n ");
	
	for(i=0;i<8;i++){
		printf("numero %d: ",i+1);
		scanf("%d",& vet[i]);
	}
	ordem(vet,8);
	
	
	for(i=0;i<3;i++){
		for(j=0;j<8;j++){
			if(vet[j]==vet[j+1]){
				aux = vet[j+1];
				vet[j+1]=vet[j+2];
			}
		}
	}
	
	
	printf("\n3 menores: ");
	for(i=0;i<3;i++){
		printf("%d",vet[i]);
		printf(" | ");
}
	
	
	
	for(i=7;i>4;i--){
		for(j=8;j>0;j--){
			if(vet[j]==vet[j-1]){
				aux = vet[j-1];
				vet[j-1]=vet[j-2];
			}
		}
}
	
	
	printf("\n3 maiores: ");
	
	for(i=7 ;i>4;i--){	
		printf("%d",vet[i]);
		printf(" | ");
	}
}
