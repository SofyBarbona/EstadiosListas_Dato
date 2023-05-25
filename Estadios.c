#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Estadios.h"
#include "lista.h"
#include "Personas.h"
#include "Motivo.h"

struct EstadioE{
    char nombre[30];
    Lista personas;
};

//constructor
Estadio crearEstadio(char nom[]){
    Estadio est = malloc(sizeof(struct EstadioE));

    strcpy(est->nombre,nom);
    est->personas = crearLista(sizeof(Persona));

    return est;
}

//agregar
void agregarPersonaEstadio(Estadio est,char nom[30], int ed){
    Persona p = crearPersona(nom,ed);
    insertar(est->personas,&p,getTamanioLista(est->personas));

}
void agregarMotivoPersona(Estadio est, int pos, char txt[]){
    Motivo mot = crearMotivo(txt);
    Persona p = *(Persona*)getElementoLista(est->personas,pos);
    insertar(getListaMotivos(p),&mot,getTamanioLista(getListaMotivos(p)));
}

//destructor
void destruirEstadio(Estadio est){
    free(est);
}

//mostrar
void mostrarEstadio(Estadio est){
    printf("El estadio se llama: %s",est->nombre);
    mostrarPersonasEstadio(est);
}
void mostrarPersonasEstadio(Estadio est){
    for(int i=0;i<getTamanioLista(est->personas);i++){
        Persona p = *(Persona*)getElementoLista(est->personas,i);
        mostrarPersona(p);
    }
}

//getters y setter
