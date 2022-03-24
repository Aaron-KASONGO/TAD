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

objet getValeur(sommet s) {
    return s->info;
}

void  setValeur(sommet s, objet o) {
    s->info = o;
}

sommet filsGauche(sommet S) {
    if (S->gauche != NULL) {
        return S->gauche;
    }else{
        return NULL;
    }
}

sommet filsDroit(sommet S) {
    if (S->droit != NULL) {
        return S->droit;
    }else{
        return NULL;
    }
}

sommet pere(sommet S) {
    if (S->pere != NULL) {
        return S->pere;
    }else{
        return NULL;
    }
}

void detruireSommet(sommet s) {
    if (s != NULL) {
        s = NULL;
    }
}

void supprimerFilsGauche(sommet s) {
    if (s->gauche !=NULL) {
        detruireSommet(s->gauche);
    }
}

void supprimerFilsDroit(sommet s) {
    if (s->droit !=NULL) {
        detruireSommet(s->droit);
    }
}