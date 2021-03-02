#include<stdio.h>

/* count lines in input */
main()
{
	double c, n1, n2, n3;
	
	n1 = 0;
	n2 = 0;
	n3 = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			++n1;
		else if(c == '\t')
			++n2;
		else if(c == ' ')
			++n3;
	printf("Cantidad de lineas: %.f\n", n1);
	printf("Cantidad de tabuladores: %.f\n", n2);
	printf("Cantidad de espacios en blanco: %.f\n", n3);
}
