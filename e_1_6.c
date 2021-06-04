#include <stdio.h>

/* copia la entrada a la salida; 2a. versión */
int main()
{
	int c;
	
	c = getchar() != EOF;
	printf("c = getchar() != EOF is %d\n",c);
}