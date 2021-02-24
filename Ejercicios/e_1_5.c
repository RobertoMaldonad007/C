#include<stdio.h>

#define LOWER		300			/* Límite inferior de la tabla */
#define UPPER		0			/* límite superior */
#define STEP		20			/* tamaño del incremento */

/* imprime la tabla Fahrenheit-Celsius */
main()
{
	int fahr;
	
	for(fahr = LOWER;  fahr >= UPPER; fahr = fahr - STEP)
		  printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
