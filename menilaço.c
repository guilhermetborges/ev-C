#include <stdio.h>

void pares(){
	int i;
	printf("imprimir numeros pares de 1 a 100: \n");
	for( i = 1; i <= 100;i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
	}
	printf("\n");
}

void impares(){
	int i ;
	printf("imprimir numeros impares de 1 a 100: \n");
	for( i = 1; i <= 100;i++){
		if(i % 2 != 0){
			printf("%d ", i);
		}
	}
	printf("\n");
}

void divisiveispor5(){
	int i;
	int count = 0;
	printf("imprimir numeros divisiveis por 5 de 1 a 100: \n");
	for( i = 1; i <= 100;i++){
		if(i % 5 == 0){
			printf("%d ", i);
			count++;
		}
	}
	printf("\nquantidade de numeros divisiveis por 5: %d", count);
}

int main(){
	int escolha;
	do{
		printf("\nMenu\n1. imprimir numeros pares de 1 a 100\n2. Imprimir numeros impares de 1 a 100\n3.Imprimir numeros divisiveis por 5 e a quantidade\n4. Sair\nescolha uma opcao: \n");
		scanf("%d", &escolha);
		switch(escolha){
			case 1:
				pares();
				break;
			case 2:
				impares();
				break;
			case 3:
				divisiveispor5();
				break;
			case 4:
				printf("saindo...\n");
				break;
			default:
				printf("opcao invalida tente novamente");
		}	
		
	}while(escolha != 4);
	return 0;
}
