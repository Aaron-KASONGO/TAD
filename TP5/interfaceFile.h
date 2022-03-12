#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#define TAILLE_MAX 10

typedef int curseur;

typedef struct File
{
    curseur tete;
    char tab[TAILLE_MAX];
    curseur queue;
    int taille;
}File, *file;
