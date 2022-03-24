#include "utilitaire.c"

int sompr(int i) {
    if (i>0) {
        return i + sompr(i-1);
    }else{
        return 0;
    }
}

int main()
{

    printf("%d",sompr(10));
    
    return 0;
}
