#include<stdio.h>

int main()
{
	int c, nl, nt, nb;//nl = new line, nt = new tab, nb = new blanks.
	
	nl = nt = nb = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			nl++;
		else if(c == '\t')
			nt++;
		else if (c == ' ');
			nb++;
	printf("Number of new lines: %d.\nNumber of tabs: %d.\nNumber of blanks: %d.", nl,nt,nb);
}