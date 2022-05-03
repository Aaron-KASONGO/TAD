#include "arbreBR.c"

int main(int argc, char const *argv[])
{
    // sommet a = creerArbreBR('a');
    // printf("%c", getValeur(a));
    // ajouterFilsGauche(a, 'b');
    // setValeur(a, 'z');
    // printf("%c", getValeur(a));

    // printf("\nLe fils gauche %c", a->gauche->info);
    // ajouterFilsDroit(a, 'c');
    // printf("\nLe fils droit %c", a->droit->info);

    // sommet f = filsDroit(a);
    // ajouterFilsDroit(f, 'I');
    // supprimerFilsDroit(a);

    // printf("%c", getValeur(filsDroit(f)));

    sommet a = creerArbreBR('A');

    printf("%c", a->info);

    inserer(a, 'B');
    printf("\n%c", a->droit->info);

    inserer(a, '4');
    printf("\n%c", a->gauche->info);

    inserer(a, 'C');

    inserer(a, '3');
    printf("\n%c", a->gauche->gauche->info);

    inserer(a, '5');
    printf("\n%c", a->gauche->droit->pere->info);

    if (rechercher(a, '3'))
        printf("\n%c", getValeur(rechercher(a, '3')));
    else
        printf("\nOn a rien trouvé !");



    
    return 0;
}
