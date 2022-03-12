#include "interfaceFile.h"

void creerFile(file f) {
    f->tete =  0;
    f->queue = 0;
    f->taille = 0;
}

int fileVide(file f) {
    return f->taille == 0;
}

int filePleine(file f) {
    return f->taille == TAILLE_MAX;
}

void enfiler(file f, char c) {
    if (!filePleine(f)) {
        if (fileVide(f)) {
            f->tab[0] = c;
            f->tete = 0;
            f->queue = 0;
            f->taille++;
        }else{
            f->queue = (f->tete + f->taille) % TAILLE_MAX;
            f->tab[f->queue] = c;
            f->taille++;
        }
    }
}

void defiler(file f) {
    if (!fileVide(f)) {
        f->tete = (f->tete + 1) % TAILLE_MAX;
        f->taille--;
    }
}

char valeurFile(file f) {
    return f->tete;
}

void detruireFile(file f) {
    f->tete = 0;
    f->queue = 0;
    memset(f->tab, 0, TAILLE_MAX);
    f->taille = 0;
}