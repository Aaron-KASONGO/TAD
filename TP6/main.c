#include "interfaceTas.c"

int main(int argc, char const *argv[])
{
    TasMin t;
    creerTas(&t, 'A');

    entasser(&t, 'C');
    entasser(&t, 'B');
    entasser(&t, 'D');
    entasser(&t, 'G');
    entasser(&t, '3');
    supprimer(&t);
    entasser(&t, 'a');
    entasser(&t, '5');
    printf("%c", valeur(&t));
    supprimer(&t);
    printf("%c", valeur(&t));

    // supprimerProf(&t);
    // printf("\n%c", valeur(&t));

    // supprimerProf(&t);
    // printf("\n%c", valeur(&t));
    
    return 0;
}
