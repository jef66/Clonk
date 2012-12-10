#include <stdio.h>

int main(int argc, char** argv)
{
    switch( argc){
        case 1:

    printf("execution de %s\n", argv[0]);
            break;
        default:
            printf("Mauvais nombre de parametres :\n usage : %s \n", argv[0]);

    }
    return 0;
}
