#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	float grauc, grauf;
	
	printf("Conversão de temperatura\n\n");
	printf("Digite a temperatura que deseja converter: ºC ");
	scanf("%f",&grauc);
	
	grauf = (grauc * 9/5)+32;
	
	printf("A temperatura em Fahrenheit é %.1f\n\n",grauf);
	
	system("pause");
}
