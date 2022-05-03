#include "arbreBinaire.c"

int main(int argc, char const *argv[])
{
    sommet a = creerArbreBinaire('a');
    printf("%c", getValeur(a));
    ajouterFilsGauche(a, 'b');
    setValeur(a, 'z');
    printf("%c", getValeur(a));

    printf("\nLe fils gauche %c", a->gauche->info);
    ajouterFilsDroit(a, 'c');
    printf("\nLe fils droit %c", a->droit->info);

    sommet f = filsDroit(a);
    ajouterFilsDroit(f, 'I');
    supprimerFilsDroit(a);

    printf("%c", getValeur(filsDroit(f)));
    return 0;
}
