#include <stdio.h>


main(int argc, char *argv[])

{
    if(argc < 3) {
        printf("Insuficientes argumentos\n");
        exit(1);
    }
    procesar(argv[1],argv[2]);
    exit(0);
}