#include<stdio.h>
/* imprime la tabla Fahrenheit-Celsius
    para fahr = 0,20, ..., 300 */
main()
{
	printf("Tabla de conversiones\n\n");
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;            /* límite inferiro de la tabla de temperaturas */
	upper = 300; /* límite superior */
	step = 20;            /* tamaño del incremento */
	
	fahr = lower;
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.2f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
