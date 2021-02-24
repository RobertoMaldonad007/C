#include<stdio.h>

/* imprime la tabla Fahrenheit-Celsius
    para fahr = 0,20, ..., 300; versi�n de punto flotante */
main()
{
	float celsius, fahr;
	int lower, upper, step;
	
	lower = 0;           /* l�mite superior de la tabla de temperaturas */
	upper = 300; /* l�mite superior */
	step = 20;           /* tama�o del incremento */
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius * 9/5 + 32);
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
