#include <stdio.h>

void maioridade(){
	int anoatual,nasc,idade;
	char sexo;
	anoatual = 2024;
	printf("qual seu sexo (M|F): ");
	scanf("%c", &sexo);
	if(sexo == 'F'|| sexo == 'f'){
		printf("voce nao tem obrigacao de se alistar.");
	}
	if (sexo == 'm' || sexo =='M'){
		printf("em que ano voce nasceu: ");
		scanf("%d",& nasc);
		idade = anoatual - nasc;
		if(idade == 17){
			printf("voce ira se alistar ano que vem.");
		}
		if(idade < 17){
			printf("nao se preocupe,voce ira se alistar em %d anos.",18 - idade);
		}
		if(idade == 18){
		printf("voce ira se alistar esse ano");
		}
		if(idade > 18){
			printf("voce deveria ter se alistado ha %d anos, va ate o alistamento o mais rapido possivel.",idade - 18);
		}
		
	}	
}

main(){
	maioridade();
}

