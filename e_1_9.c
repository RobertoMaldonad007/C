#include<stdio.h>

int main()
{
    int c;

    while((c=getchar()) != EOF)
    {
        if(c == ' ')
        {
            putchar(' ');
            while((c = getchar()) != EOF && c == ' ');
        }
        else
            putchar(c);
    }
}