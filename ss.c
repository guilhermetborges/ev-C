#include <stdio.h>

main(){
	int cont=0;
	int vet1[5], vet2[5],vetigual[cont],i,k;

	for(i=0;i<5;i++){
		printf("digite um  numero para o vetor 1 na posicao %d: ",i+1);
		scanf("%d", & vet1[i]);
	}
	printf("\n==-=--=-=-=-=-=-=-=-=-=\n");
	for(i=0;i<5;i++){
		printf("digite um  numero para o vetor 2 na posicao %d: ",i+1);
		scanf("%d", & vet2[i]);
	}
	printf("\n==-=--=-=-=-=-=-=-=-=-=\n");

	for(i=0;i<5;i++){
		for(k=4;k>=0;k--){
			if(vet1[i]==vet2[i]){
				cont++;
				vetigual[i] = vet1[i];
			}
		}
	}
	
	printf("Numeros do primeiro vetor: ");
	for(i=0;i<5;i++){
		printf("%d | ",vet1[i]);
	}
	
	printf("\nNumeros do segundo vetor: ");
	for(i=0;i<5;i++){
		printf("%d | ",vet2[i]);
	}
	
	printf("\nNumeros iguais dos vetores: ");
	for(i=0;i<5;i++){
		printf("%d | ",vetigual[i]);
	}
}





