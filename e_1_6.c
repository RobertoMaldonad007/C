#include <stdio.h>

/* copia la entrada a la salida; 2a. versi�n */
main()
{
	int c;
	
	while (((c = getchar()) != EOF) == 0)
	{
		putchar(c);
	}
}
