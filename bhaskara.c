#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include<locale.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	
	double a,b,c,delta,x1,x2;
	printf("Digite os valores de a, b e c separados por espaço: ");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	delta = pow(b,2) - 4 * a * c;
	
	x1 = (-b + sqrt(delta)) / (2 * a);
	x2 = (-b - sqrt(delta)) / (2 * a);
	
	printf("Delta = %.2lf \nX1 = %.2lf \nX2 = %.2lf\n\n",delta,x1,x2);
	system("pause");	
}
