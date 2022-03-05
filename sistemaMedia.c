#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
main(){
	double  nota1 ,  nota2 ,  media ;
	int  faltas ;
	
	setlocale ( LC_ALL , "Português" );
	
	printf ( "Verificar se foi aprovado na disciplina \n\n " );
	
	printf ( "Digite a 1ª nota: " );
	scanf ( "%lf" , & nota1 );

	printf ( "Digite a 2ª nota: " );
	scanf ( "%lf" , & nota2 );
	
	printf ( "Digite as faltas: " );
	scanf ( "%d" , & faltas );
	
	media  =  ( nota1 + nota2 ) / 2 ;
	
	printf ( "Media = %.2lf \n " , media );
	if  ( media >= 6  &&  faltas <= 18 ){
		printf ( "Aluno APROVADO!" );
	} else {
		printf ( "Aluno REPROVADO" );
		if  ( media < 6  &&  faltas > 18 ){		
			printf ( "por nota e falta!" );
		} else  if  ( media < 6 ){		
			printf ( "por nota!" );
		} else  if  ( faltas > 18 ){		
			printf ( "por falta!" );
		}
	}
	
	printf (" \n\n ");
	system ("pause");
}
