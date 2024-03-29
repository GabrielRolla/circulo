#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>


int main() {


    Circulo *c1, *c2, *c3;
    c1 = circ_cria(0, 0, 5);
    c2 = circ_cria(0, 0, 10);
    c3 = circ_cria(0, 0, 5);

    printf("Área do círculo c1: %.2f\n", circ_area(c1));
    printf("Área do círculo c2: %.2f\n", circ_area(c2));
    printf("Círculo c1 e c2 são concêntricos? %s\n", circ_concentricos(c1, c2) ? "Sim" : "Não");
    printf("Círculo c1 e c3 são concêntricos? %s\n", circ_concentricos(c1, c3) ? "Sim" : "Não");

    circ_libera(c1);
    circ_libera(c2);
    circ_libera(c3);

    return 0;
}
