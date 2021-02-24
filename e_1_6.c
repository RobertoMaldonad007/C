#include <stdio.h>

/* copia la entrada a la salida; 2a. versión */
main()
{
	int c;
	
	while (((c = getchar()) != EOF) == 0)
	{
		putchar(c);
	}
}
