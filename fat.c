#include <stdio.h>

main(){
	int n,fat = 1,i;
	
	printf("digite um numero para o fat: ");
	scanf("%d",&n);
	
	printf("\n%d! = %d ",n,n);
	
	for(i = n - 1;i>=1;i--){
		fat = fat * i;
		printf("*%d",i);
	}
	
	printf("\ntotal: %d",fat);
}
