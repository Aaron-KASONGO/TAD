#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define NIL 0

typedef struct Cellule Cellule;
typedef struct Cellule *curseur;

typedef struct ListDC ListDC;
typedef struct ListDC *LDC;




struct Cellule
{
    char v;
    curseur celSuiv;
    curseur celPrec;
};

struct ListDC
{
    curseur celEntete;
    curseur celEnqueue;
    int taille;
    curseur cle;
};

