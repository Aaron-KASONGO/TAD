#include "arbreBinaire.h"

sommet creerArbreBinaire(objet racine) {
    sommet a = (sommet)malloc(sizeof(struct sommet));
    a->info = racine;
    a->droit = NULL;
    a->gauche = NULL;
    a->pere = NULL;
    return a;
}

void ajouterFilsGauche(sommet s, objet o) {
    sommet n = (sommet)malloc(sizeof(struct sommet));
    s->gauche = n;
    n->pere = s;
    n->info = o;
    n->droit = NULL;
    n->gauche = NULL;
}

void ajouterFilsDroit(sommet s, objet o) {
    sommet n = (sommet)malloc(sizeof(struct sommet));
    s->droit = n;
    n->pere = s;
    n->info = o;
    n->droit = NULL;
    n->gauche = NULL;
}