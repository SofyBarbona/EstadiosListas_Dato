#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED
#include "lista.h"

struct PersonaE;
typedef struct PersonaE* Persona;

//constructor
Persona crearPersona(char nom[30], int e);

//destructor
void destruirPersona(Persona p);

//mostrar
void mostrarPersona(Persona p);

//getters y setters
Lista getListaMotivos(Persona p);
#endif // PERSONAS_H_INCLUDED
