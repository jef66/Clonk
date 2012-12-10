#include <stdio.h>

int main(int argc, char** argv)
{
    printf("execution de %s", argv[0]);
    switch( argc){
        case 1:

            break;
        default:
            printf("Mauvais nombre de parametres :\n usage : %s ", argv[0]);

    }
    return 0;
}
