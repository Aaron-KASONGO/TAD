#include "interfaceLDC.h"


curseur creerCellule(char c)
{
    curseur cel = (curseur)malloc(sizeof(Cellule));
    if (cel != NIL) {
        cel->v = c;
        cel->celSuiv = NIL;
        cel->celPrec = NIL;
    }
    return cel;
}

LDC creerLDC() {
    LDC L;
    L = (LDC)malloc(sizeof(ListDC));
    if (L != NIL) {
        L->taille = 0;
        L->celEntete = NIL;
        L->celEnqueue = NIL;
        L->cle = NIL;
    }
    return L;
}


void suivant(LDC L) {
    if (L->cle != NIL) {
        L->cle = L->cle->celSuiv;
    }
}

void setQueue(LDC L) {
    if (L->taille == 1) {
        L->celEnqueue = L->celEntete;
    }
    while(L->cle->celSuiv != NIL) {
        suivant(L);
    }
}

void insererEntete(LDC L, char c) {
    curseur cel = creerCellule(c);
    if (L->taille == 0) {
        L->celEnqueue = cel;
    }
    cel->celSuiv = L->celEntete;
    L->celEntete = cel;
    L->cle = cel;
    L->taille++;    
}

void insererApres(LDC L, char c) {
    curseur cel = creerCellule(c);
    if (L->taille == 0) {
        insererEntete(L, c);
    }else{
        cel->celSuiv = L->cle->celSuiv;
        cel->celPrec = L->cle;
        L->cle->celSuiv->celPrec = cel;
        L->cle->celSuiv = cel;
        L->taille++;
        if (L->cle->celSuiv == NIL) {
            setQueue(L);
            L->celEnqueue = L->cle;
            L->cle = L->cle->celPrec;
        }
    }

}

// void debutList(LDC L) {
//     L->cel
// }

