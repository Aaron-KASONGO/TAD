#include "interfacePile.c"


Pile range(Pile* p) {
    Pile p1, p2;
    creerPile(&p1);
    creerPile(&p2);

    while (!pileVide(p)) {
        empiler(&p2,valeur(p));
        if (valeur(p) % 2 == 0) {
            empiler(&p1, valeur(p));
        }
        depiler(p);
    }
    while (!pileVide(&p2)) {
        empiler(p,valeur(&p2));
        if (valeur(p) % 2 == 1) {
            empiler(&p1, valeur(p));
        }
        depiler(&p2);
    }
    return p1;
}

int parentez(Pile* p) {
    int test = 0;
    int ret = 1;
    while (!pileVide(p))
    {
        if (valeur(p) == '(') {
            test = test + 1;
        }else if (valeur(p) == ')') {
            test = test - 1;
        }
        depiler(p);
    }
    if (test != 0) {
        ret = 0;
    }
    return ret;
}


int main(int argc, char const *argv[])
{
    Pile p;
    Pile p1;

    creerPile(&p);
    empiler(&p, 'A');
    empiler(&p, 'B');
    empiler(&p, ')');
    empiler(&p, '(');
    empiler(&p, '0');
    empiler(&p, ')');
    empiler(&p, '(');
    empiler(&p, 'O');
    printf("%c", valeur(&p));

    printf("\n%d",parentez(&p));

    

    return 0;
}

