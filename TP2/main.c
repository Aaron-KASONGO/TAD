#include "utilitaire.c"

int main()
{

    listSC list;
    creerListe(&list);
    insereEnTete(&list, 'A');
    insereEnTete(&list, 'B');
    insereEnTete(&list, 'C');
    insereEnTete(&list, 'D');
    suivant(&list);
    suivant(&list);
    insereApres(&list, 'F');
    supprimeEnTete(&list);
    insereEnTete(&list, 'C');
    insereEnTete(&list, 'G');
    afficherListe(&list);
    supprimeApres(&list);
    afficherListe(&list);
    suivant(&list);
    suivant(&list);
    supprimeApres(&list);
    afficherListe(&list);
    
    return 0;
}
