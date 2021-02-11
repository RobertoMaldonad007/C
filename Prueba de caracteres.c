#include <stdio.h> /* Es una directiva del prepocesador C. Indica al prepocesador que incluya en el programa el contenido del encabezado est�ndar de entrada/salida. Este encabezado contiene
informaci�n que el compilador utiliza cuando compila las llamadas a las funciones de la biblioteca est�ndar de entrada/salida, como printf. */

int main (void) {  /* Main es un bloque de construcci�n de programas llamado funci�n. Todo programa en C comienza su ejecuci�n en la funci�n Main. Tmambi�n, { inicia el cuerpo de cada funci�n. */
char SO1[] = "Windows";
char SO2[] = "Linux";
	printf ("%s es mas utilizado que\n", SO1) ; /* Indicar a la computadora, en este caso, a imprimir en la pantalla. Toda cadena de c�racteres que est� dentro de "" se imprimir� en la pantalla. */
	printf ("%s, pero la apariencia\n", SO2) ;
	printf ("de %s es muy buena.", SO2) ;
		
	return 0; /* Indica que el programa termin� con �xito. */
	
} /* Cierra toda funci�n, incluso a main. */
