#include <stdio.h>

main()
{
    char area[1024];
    int a; long b;
    
        printf("1: %d %ld\n", -6534, 1273632);
    sprintf(area, "%d %ld", -6534, 1273632);
        printf("2: %s\n",area);
    sscanf(area, "%d %ld", &a, &b);
    printf("3: %d %ld\n", a, b);
}

