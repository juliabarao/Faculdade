#include<stdio.h>
#include<stdlib.h>
#include<math.h>

main(){
	double peso, altura, imc; 
	
	printf("Exibir status do IMC\n\n");
	
	printf("Digite o peso..: ");
	scanf("%lf",&peso);
		
	printf("Digite o altura: ");
	scanf("%lf",&altura);
	
	imc = peso / pow(altura,2);
	
	printf("IMC = %.2lf\n",imc);
	
	if (imc<18.5){	
		printf("Abaixo do peso");
	}else if (imc>=18.5 && imc<25){	
		printf("Peso normal");
	}else if (imc>=25 && imc<30){	
		printf("Acima do peso");
	}else if(imc>=30){
		printf("Obeso");
	}
	
	printf("\n\n");	
	system("pause");
}
