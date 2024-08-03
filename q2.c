#include <stdio.h>
main(){
	int i=1,num,media,soma=0,cont;
	printf("digite um numero de 50 a 1000\n");
	scanf("%d",&num);
	while(num < 50 ){
		printf("digite um numero de 50 a 1000\n");
		scanf("%d",&num);
	}
	
	while(num > 1000 ){
		printf("digite um numero de 50 a 1000\n");
		scanf("%d",&num);
	}
	
	for(i;i < num;i++){
		if(i%2==0){
			printf("%d\n",i);
			cont++;
			soma = soma + i;
		}
	}
	printf("\n%d\n",soma);
	media = soma/cont;
	printf("%d",media);
	
}
