#include <getopt.h>  
#include <unistd.h>  
extern char *optarg;
extern int optind, opterr, optopt;

int debug;

main(int argc, char *argv[])
{
    char *optstring="RrTtV:v:";
    int c;

    opterr=0;
    while((c=getopt(argc, argv, optstring)) != EOF)
        switch(c) {
            case 'v':
            case 'V':
                debug=atoi(optarg);
                printf("Nivel de debugging: %d\n",debug);
                break;
            case ':': 
                printf("Falta valor numerico\n");
                exit(1);
                break;
            case 'R':
            case 'r':
                printf("Recibiendo\n");
                recibir(argv[optind]);
                break;
            case 'T':
            case 't':
                printf("Transmitiendo\n");
                transmitir(argv[optind]);
                break;
            case '?':
                printf("Mal argumento\n");
                break;
        }

}