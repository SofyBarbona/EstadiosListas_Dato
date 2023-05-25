#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Personas.h"
#include "Motivo.h"
#include "lista.h"

struct PersonaE{
    char nombre[30];
    int edad;
    Lista motivos;
};

//constructor
Persona crearPersona(char nom[30], int e){
    Persona p = malloc(sizeof(struct PersonaE));

    strcpy(p->nombre,nom);
    p->edad = e;

    p->motivos = crearLista(sizeof(Motivo));

    return p;
}
//destructor
void destruirPersona(Persona p){
    free(p);
}

//mostrar
void mostrarPersona(Persona p){
    printf("\nEl nombre de la persona es: %s\n",p->nombre);
    printf("La edad es: %d\n",p->edad);
    mostrarListaMotivos(p);
}
void mostrarListaMotivos(Persona p){
    int tam = getTamanioLista(p->motivos);
    for(int i=0;i<tam;i++){
        Motivo mot = *(Motivo*)getElementoLista(p->motivos,i);
        mostrarMotivo(mot);
    }
}

//getters y setters
Lista getListaMotivos(Persona p){
    return p->motivos;
}
