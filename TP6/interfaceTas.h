#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define T_MAX 100
#define RACINE 1
#define VIDE 0

typedef struct TasMin
{
    char arbre[T_MAX];
    int s;
    int taille;
} TasMin;


void creerTas(TasMin *t, char v);