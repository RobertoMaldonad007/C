#include<stdio.h>

int main()
{
	int c, n1, n2, n3;
	
	n1 = n2 = n3 =0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			n1++;
		else if(c == '\t')
			n2++;
		else if(c == ' ')
			n3++;
	printf("Number of new lines: %d.\nNumber of tabs: %d.\nNumber of blanks: %d.", n1,n2,n3);
}