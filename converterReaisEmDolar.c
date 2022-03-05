#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor, resultado;
	
	printf("Conversão de moedas\n\n");
	printf("Digite o valor em Reais: R$ ");
	scanf("%f",&valor);
	
	resultado = valor * 0.19;
	
	printf("O valor em Dólar é %.2f\n\n",resultado);
	
	system("pause");
}
