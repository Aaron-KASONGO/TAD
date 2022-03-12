#include "interfaceLDC.c"

int main(int argc, char const *argv[])
{
    LDC l = creerLDC();
    
    insererEntete(l, 'x');
    insererEntete(l, 'A');
    insererApres(l, 'G');
    insererApres(l, 'P');

    printf("Taille : %d\n", l->taille);
    printf("Entête : %c\n", l->celEntete->v);
    printf("Clé : %c\n", l->cle->v);
    printf("Queue : %c\n", l->celEnqueue->v);

    printf("Suivant Entête : %c\n", l->celEntete->celSuiv->v);
    printf("Précedant Queue : %c\n", l->celEnqueue->celPrec->v);

    // insererEntete(l, 'T');
    // insererEntete(l, 'P');

    // printf("taille : %d\n", l->taille);
    // printf("tete : %c\n", l->celEntete->v);
    // printf("taille : %c\n", l->celEntete->celSuiv->v);
    // printf("taille : %c\n", l->celEnqueue->v);
    
    return 0;
}
