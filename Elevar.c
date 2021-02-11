#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main ()
{
	double numero, potencia ;
	
	printf("Introducir el primer numero:\n") ;
	scanf("%lf", &numero) ;
	
	printf("Introducir la potencia para elevar:\n") ;
	scanf("%lf", &potencia) ;
	
	double elevado = pow(numero, potencia) ;
	
	printf("Si %lf es elevado a la %lf potencia, el resultado es: %lf", numero, potencia, elevado) ;
}
