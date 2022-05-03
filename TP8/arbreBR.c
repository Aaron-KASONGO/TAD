#include "arbreBR.h"

sommet creerArbreBR(objet racine) {
    sommet a = (sommet)malloc(sizeof(struct sommet));
    a->info = racine;
    a->droit = NULL;
    a->gauche = NULL;
    a->pere = NULL;
    return a;
}

void inserer(sommet abr, objet o) {
    objet v;
    sommet g, d;

    v = getValeur(abr);
    g = filsGauche(abr);
    d = filsDroit(abr);

    if (o > v) {
        if (d) {
            inserer(d, o);
        }else{
            sommet n = (sommet)malloc(sizeof(struct sommet));
            abr->droit = n;
            abr->droit->pere = abr;
            abr->droit->info = o;
        }
    }else {
        if (g) {
            inserer(g, o);
        }else {
            sommet n = (sommet)malloc(sizeof(struct sommet));
            abr->gauche = n;
            abr->gauche->pere = abr;
            abr->gauche->info = o;
        }
    }
}

sommet minimum(sommet abr) {
    sommet g;

    g = filsGauche(abr);
    if (g) {
        minimum(g);
    }else {
        return abr;
    }
}

sommet maximum(sommet abr) {
    sommet d;

    d = filsDroit(abr);
    if (d) {
        maximum(d);
    }else {
        return abr;
    }
}

sommet successeur(sommet abr) {
    sommet d;

    d = filsDroit(abr);
    if (d)
        return minimum(d);
    else
        return abr;
}

sommet predecesseur(sommet abr) {
    sommet g;

    g = filsGauche(abr);
    if (g)
        return maximum(g);
    else
        return abr;
}

sommet rechercher(sommet abr, objet o) {
    objet v;
    sommet g, d;

    v = getValeur(abr);
    g = filsGauche(abr);
    d = filsDroit(abr);

    if (v == o) {
        return abr;
    }else {
        if (v < o && d) {
            rechercher(d, o);
        }else if (v > o && g){
            rechercher(g, o);
        }else {
            return NULL;
        }
    }
}

objet getValeur(sommet s) {
    return s->info;
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

// il y a encore à faire...
void supprimer(sommet abr, objet o) {
    sommet g, d, sup, suc;
    
    sup = rechercher(abr, o);
    if (sup) {
        suc = successeur(sup);
        sup->info = getValeur(suc);
        supprimer(suc, sup->info);
    }
}