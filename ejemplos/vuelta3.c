#include <limits.h>
main()
{
        int a; 
        float b;

        b = 100.6;
        a = b;
        printf("%f %d\n",b,a);
        b = INT_MAX + 1009.6;
        a = b;
        printf("%f %d\n",b,a);
}
