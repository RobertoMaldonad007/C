#include <stdio.h> /* Es una directiva del prepocesador C. Indica al prepocesador que incluya en el programa el contenido del encabezado estándar de entrada/salida. Este encabezado contiene
información que el compilador utiliza cuando compila las llamadas a las funciones de la biblioteca estándar de entrada/salida, como printf. */

int main (void) {  /* Main es un bloque de construcción de programas llamado función. Todo programa en C comienza su ejecución en la función Main. Tmambién, { inicia el cuerpo de cada función. */
char SO1[] = "Windows";
char SO2[] = "Linux";
	printf ("%s es mas utilizado que\n", SO1) ; /* Indicar a la computadora, en este caso, a imprimir en la pantalla. Toda cadena de cáracteres que esté dentro de "" se imprimirá en la pantalla. */
	printf ("%s, pero la apariencia\n", SO2) ;
	printf ("de %s es muy buena.", SO2) ;
		
	return 0; /* Indica que el programa terminó con éxito. */
	
} /* Cierra toda función, incluso a main. */
