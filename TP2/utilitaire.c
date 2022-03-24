#include "interfaceListeSC.c"

listSC tranStrToLSC(char *s) {
    listSC L;
    creerListe(&L);
    int i;
    for (i=strlen(s)-1; i>=0; i--) {
        insereEnTete(&L, s[i]);
    }
    return L;
}

void afficherListe(listSC *L) {
    curseur cle = getCleListe(L);
    debutList(L);
    while (getCleListe(L) != NIL)
    {
        printf("%c", valeur(L));
        suivant(L);
    }
    setCleListe(L, cle);
    printf("\n");
}


void supprimerOccur(char *s, char c) {
    listSC L = tranStrToLSC(s);
    curseur tampon = NIL;


    while (getCleListe(&L) != NIL)
    {
        tampon = getCleListe(&L);
        suivant(&L);
        if (valeur(&L) == c) {
            setCleListe(&L, tampon);
            supprimeApres(&L);
        }
    }

    debutList(&L);

    if (valeur(&L) == c) {
        supprimeEnTete(&L);
    }
    afficherListe(&L);    
}
