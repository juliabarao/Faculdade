#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	int numero,i,resultado;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Cálculo da tabuada!\n\n");
	do{	
		printf("Digite um número entre 1 e 10: ");
		scanf("%d",&numero);
	}while(numero<1 || numero>10);
	
	printf("\nTabuada do número %d\n",numero);
	
	for(i=1;i<=10;i++){
		resultado = numero * i;
		printf("%d X %d = %d\n",numero,i,resultado);
	}	
	
	printf("\n\n");
	system("pause");
}
