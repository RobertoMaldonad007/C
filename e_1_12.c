#include<stdio.h>

int main()
{
    int c,state=0;

    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t'){
            printf("\n");
        }
        else
        {
            putchar(c);
        }
    }
}