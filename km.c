#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	
	double kmRodados, tempoGasto, velocidadeMedia;
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("Programa calcula velocidade media\n\n");
	printf("Digite o km rodado: ");
	scanf("%lf",&kmRodados);
	
	printf("digite o tempo gastou em horas: ");
	scanf("%lf",&tempoGasto);
	
	velocidadeMedia = kmRodados/tempoGasto;
	
	printf("A velocidade média foi de %.2lf km/h\n\n",velocidadeMedia);
	
	system("pause");
	
}
