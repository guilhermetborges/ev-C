#include <stdio.h>

main(){
	printf("MENOR NUMERO ");
	int num1,num2;
	printf("digite um numero: ");
	scanf("%d", &num1);
	printf("digite um numero: ");
	scanf("%d", &num2);
	if(num1 > num2){
		printf("%d",num2);
		}else if(num2 > num1){	
			printf("%d",num1);
		}else{
		printf("os 2 sao iguais");
	}
}	

