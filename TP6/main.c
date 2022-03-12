#include "interfaceTas.c"

int main(int argc, char const *argv[])
{
    TasMin t;
    creerTas(&t, 'A');

    entasser(&t, 'C');
    entasser(&t, 'B');
    entasser(&t, 'D');
    entasser(&t, 'G');
    printf("%c", valeur(&t));

    supprimer(&t);
    printf("\n%c", valeur(&t));

    supprimer(&t);
    printf("\n%c", valeur(&t));
    
    return 0;
}
