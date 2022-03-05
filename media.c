#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double nota1,nota2, media;
	
	printf("Descobra sua Média\n\n");
	printf("Digite quanto tirou na Av1: ");
	scanf("%lf",&nota1);
	
	printf("\n\nDigite quanto tirou na Av2: ");
	scanf("%lf",&nota2);
	
	media = (nota1+nota2)/2;
	
	printf("\nSua Média é %.1lf\n",media);
	
	system("pause");
}
