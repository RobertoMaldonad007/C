#include<stdio.h>

#define LOWER		300			/* L�mite inferior de la tabla */
#define UPPER		0			/* l�mite superior */
#define STEP		20			/* tama�o del incremento */

/* imprime la tabla Fahrenheit-Celsius */
main()
{
	int fahr;
	
	for(fahr = LOWER;  fahr >= UPPER; fahr = fahr - STEP)
		  printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
