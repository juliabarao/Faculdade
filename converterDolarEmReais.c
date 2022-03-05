/*
Bibliotecas de funções:

stdlib.h
stdio.h
math.h
string.h
limites.h
ctype.h
hora.h
stdbool.h
*/

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor, resultado;
	
	printf("Conversão de moedas\n\n");
	printf("Digite o valor em dólar: US$ ");
	scanf("%f",&valor);
	
	resultado = valor * 5.25;
	
	printf("O valor em reais é %.2f\n\n",resultado);
	
	system("pause");
}


