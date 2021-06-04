#include<stdio.h>

#define IN 1
#define OUT 0

int main()
{
    int c, nw=0, state, bugs = 0;

    state = OUT;
    while((c = getchar()) != EOF){
        if(c == '\b')
        {
            bugs++;
            break;
        }
        else if(c == ' ' || c == '\t' || c == '\n')
            state = OUT;
        else if (state == OUT)
        {
            state = IN;
            nw++;
        }
    }
    if(bugs==0)
    {
        printf("Number of words: %d.",nw);
    }
    else
    {
        printf("¡THERE'S A BUG IN THE CODE.\nTHERE'S A STRANGE CHARACTER IN THE INPUT.");
    }
}