#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>


typedef struct Circulo{
    float x;  // Coordenada x do centro
    float y;  // Coordenada y do centro
    float raio;  // Raio do círculo

} Circulo;



Circulo *circ_cria(float x, float y, float r) {
    Circulo *c;
    c = malloc(sizeof(Circulo));
    if (c != NULL) {
        c->x = x;
        c->y = y;
        c->raio = r;
    }
    return c;
}

float circ_area(Circulo *c) {
    return 3.14159 * c->raio * c->raio; // Aproximação de Pi
}

void circ_libera(Circulo *c) {
    free(c);
}

int circ_concentricos(Circulo *c1, Circulo *c2){
    if(c1->x == c2->x && c1->y == c2->y){
        return(1);
    }
}

float circ_raio(Circulo *c) { 
    return (c->raio);
}