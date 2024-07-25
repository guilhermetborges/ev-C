#include <stdio.h>

void pares(){
	int i,f;
	printf("digite o inicio da sequencia:\n");
	scanf("%d", &i);
	printf("digite o fim da sequencia:\n");
	scanf("%d", &f);
	printf("imprimir numeros pares de %d a %d: \n",i,f);
	for( i ; i <= f;i++){
		if(i % 2 == 0){
			printf("%d ", i);
		}
}
	printf("\n");
}

void impares(){
	int i,f;
	printf("digite o inicio da sequencia:\n");
	scanf("%d", &i);
	printf("digite o fim da sequencia:\n");
	scanf("%d", &f);
	printf("imprimir numeros impares de %d a %d: \n",i,f);
	for( i ; i <= f;i++){
		if(i % 2 != 0){
			printf("%d ", i);
		}
	}
	printf("\n");
}

void divisiveispor5(){
	int i,f;
	printf("digite o inicio da sequencia:\n");
	scanf("%d", &i);
	printf("digite o fim da sequencia:\n");
	scanf("%d", &f);

	int count = 0;
	printf("imprimir numeros divisiveis por 5 de %d a %d: \n",i,f);
	for( i; i <= f;i++){
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
		printf("\nMenu\n1. imprimir numeros pares \n2. Imprimir numeros impares \n3.Imprimir numeros divisiveis por 5 e a quantidade\n4. Sair\nescolha uma opcao: \n");
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
