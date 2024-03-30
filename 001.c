#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
		char sexo[2];
		int idade,anoAtual,nasc;
		
		printf("qual seu sexo? [M|F]  ");
		scanf("%s", sexo);
		// convertendo para somente letras maiusculas
		sexo[0] = toupper(sexo[0]);
		
		if(strcmp(sexo, "M") == 0 ){
		printf("qual sua idade: ");
		scanf("%d", & idade);
			if(idade == 18){
				printf("voce deve se alistar ja!!");
			}else if(idade < 18 && idade > 15){
				printf("fique atento,seu alistamento sera em breve.");
			}else if(idade <= 15){
				printf("ainda esta longe do alistamento");
			}else{
				printf("voce deve se alistar o mais rapido possivel, pois seu prazo ja passou!!");
			}
		}else if(strcmp(sexo, "F") == 0){
			printf("o alistamento e obrigatorio somente para homens!");
		}else{
			printf("sexo nao reconhecido.");
		}
	return 0;
}
	
