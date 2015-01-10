#include <stdio.h>
int invert()
{
        int c; 

        if((c = getchar()) == EOF)
                return;
        invert();
        putchar(c);
}

main()
{
        invert();
}


