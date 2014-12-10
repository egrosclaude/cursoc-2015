#include <stdio.h>

main(int argc, char *argv[])
{
    if(argc != 3) 
        printf("Debe dar nombre y edad del usuario\n");
    else
        printf("Nombre: %s Edad: %d\n", argv[1], atoi(argv[2]));
}