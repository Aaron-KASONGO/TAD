#include "interfaceTas.h"

void creerTas(TasMin *t, char x) {
    t->taille = 1;
    t->s = 1;
    t->arbre[1] = x;
}

char valeur(TasMin *t) {
    return t->arbre[1];
}

void permuter(TasMin *t, int s1, int s2) {
    char a = t->arbre[s1];
    t->arbre[s1] = t->arbre[s2];
    t->arbre[s2] = a;
}

char pere(TasMin *t, int s) {
    return t->arbre[s/2];
}

void reorganiserAsc(TasMin *t, int s) {
    if (s != 1) {
        if (t->arbre[s] < pere(t, s)) {
            permuter(t, s, s/2);
            reorganiserAsc(t, s/2);
        }
    }
}

void entasser(TasMin *t, char x) {
    t->taille++;
    t->s++;
    t->arbre[t->s] = x;
    reorganiserAsc(t, t->s);
}

char getValeur(TasMin *t, int s) {
    return t->arbre[s];
}

char filsG(TasMin *t, int s) {
    if (s*2 <= t->taille) {
        return t->arbre[s*2];
    }else{
        return '-';
    }
}

char filsD(TasMin *t, int s) {
    if (s*2+1 <= t->taille) {
        return t->arbre[s*2+1];
    }else{
        return '-';
    }
}

void reorganiserDsc(TasMin *t, int s) {
    char fg = filsG(t, s);
    char fd = filsD(t, s);
    char v = getValeur(t, s);
    if (fg != VIDE && fd != VIDE) {
        if (fg > fd && fd < v) {
            permuter(t, s, s*2+1);
            reorganiserDsc(t, s*2+1);
        }else if (fg < fd && fg < v) {
            permuter(t, s, s*2);
            reorganiserDsc(t, s*2);
        }
    }else if (fg != VIDE) {
        if (fg < v) {
            permuter(t, s, s*2);
            reorganiserDsc(t, s*2);
        }
    }
}

void supprimerProf(TasMin *t) {
    t->taille--;
    t->arbre[RACINE] = t->arbre[t->s];
    t->s--;
    reorganiserDsc(t, RACINE);
}

void supprimer(TasMin *t) {
    int i = 1;

    if (t->taille != 0) {
        for (i; i<t->taille; i++) {
            t->arbre[i] = t->arbre[i+1];
        }
        t->taille--;
    }
    reorganiserDsc(t, RACINE);
}

// void reorganiserDsc(TasMin *t) {
//     char r = t->arbre[RACINE];
//     if (t->arbre[r] > filsG(t, r)) {
//         permuter(t, r, filsG(t, r));
//         r = r * 2;
//         reorganiserDsc(t);
//     }else if (t->arbre[r] > filsD(t, r)) {
//         permuter(t, r, filsD(t, r));
//         r = r * 2 + 1;
//         reorganiserDsc(t);
//     }
// }
