#include "arbreBinaire.c"

int main(int argc, char const *argv[])
{
    sommet a = creerArbreBinaire('a');
    printf("%c", a->info);
    ajouterFilsGauche(a, 'b');
    printf("\nLe fils gauche %c", a->gauche->info);
    ajouterFilsDroit(a, 'c');
    printf("\nLe fils droit %c", a->droit->info);
    return 0;
}
