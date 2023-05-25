#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Motivo.h"

struct MotivoE{
    char texto[30];
};

//constructor
Motivo crearMotivo(char txt[]){
    Motivo mo = malloc(sizeof(struct MotivoE));

    strcpy(mo->texto,txt);

    return mo;
}

//destructor
void destruirMotivo(Motivo mo){
    free(mo);
}

//mostrar
void mostrarMotivo(Motivo mo){
    printf("El motivo es: %s\n",mo->texto);
}

//getters y setters
