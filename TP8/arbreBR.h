#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#ifndef ARBRE_BINAIRE_H
#define ARBRE_BINAIRE_H

typedef char objet;
typedef struct sommet *sommet;
typedef struct sommet arbreBR;

struct sommet
{
  objet info;
  sommet gauche, droit, pere;
};


sommet creerArbreBR(objet racine);
void detruireSommet(sommet s);
char getValeur(sommet s);
void  setValeur(sommet s, objet o);
sommet filsGauche(sommet S);
sommet filsDroit(sommet S);
sommet pere(sommet S);
void ajouterFilsGauche(sommet s, objet o);
void ajouterFilsDroit(sommet s, objet o);
void supprimerFilsGauche(sommet s);
void supprimerFilsDroit(sommet s);

//nouvelles primitives 
void setFilsGauche(sommet s, sommet fg);
void setFilsDroit(sommet s, sommet fg);
void setPere(sommet s, sommet p);


#endif /* ARBRE_BINAIRE_H */
