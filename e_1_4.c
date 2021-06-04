#include<stdio.h>

/* imprime la tabla Celsius-Fahrenheit
    para fahr = 0, 20, ..., 300; versión de punto flotante */
int main()
{
	printf("Tabla de conversión (Celsius-Fahreheit)\n\n");

	float celsius, fahr;
	int lower, upper, step;
	
	lower = 0;		/* límite inferior de la tabla de temperaturas */
	upper = 300;	/* límite superior */
	step = 20;		/* tamaño del incremento */
	
	celsius = lower;
	while (celsius <= upper) {
		fahr = (9.0/5.0*celsius)+32.0;
		printf("%3.0f\t%6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}