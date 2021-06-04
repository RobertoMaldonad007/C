#include<stdio.h>
/* imprime la tabla Fahrenheit-Celsius
    para fahr = 0,20, ..., 300 */
int main()
{
	printf("Tabla de conversiones (Fahrenheit-Celsius)\n\n");
	
	float fahr, celsius;
	int lower, upper, step;
	
	lower = 0;           /* l�mite inferiro de la tabla de temperaturas */
	upper = 300; /* l�mite superior */
	step = 20;           /* tama�o del incremento */
	
	fahr = lower;
	while (fahr >= upper) {
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f\t%6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}
}
