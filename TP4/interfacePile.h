#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#define TAILLEMax  10     
#define NIL -1

typedef int curseur;

typedef struct cellule{
  char val;
  curseur prec;
} Cellule;

typedef struct pile{
  int taille;
  Cellule tab[TAILLEMax];
  curseur sommet;
}Pile, *pile;