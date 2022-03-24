#include "interfacePile.h"


void creerPile(pile p) {
    p->sommet = NIL;
    p->taille = 0;
    curseur i;
    for (i=0; i<TAILLEMax; i++) {
        p->tab[i].prec = i-1;
        //printf("\n%d -> %d", i, i+1);
    }
}

int pilePleine(pile p) {
    return (p->taille == TAILLEMax);
}

int pileVide(pile p) {
    return (p->taille == 0);
}

void empiler(pile p, char val) {
    if (!pilePleine(p)) {
        if (pileVide(p)) {
            p->sommet = 0;
            p->tab[p->sommet].val = val;
            p->taille++;
        }else{
            p->tab[p->sommet+1].prec = p->sommet;
            p->tab[p->sommet+1].val = val;
            p->sommet = p->sommet+1;
            p->taille++;
        }
    }
}

void depiler(pile p) {
    if (!pileVide(p)) {
        p->sommet = p->tab[p->sommet].prec;
        p->taille--;
    }
}

char valeur(pile p) {
    return p->tab[p->sommet].val;
}

// void detruire(pile p) {
//     p->sommet = NULL;
//     p->taille = NIL;
//     p->tab[TAILLEMax];
// }