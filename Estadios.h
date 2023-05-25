#ifndef ESTADIOS_H_INCLUDED
#define ESTADIOS_H_INCLUDED

struct EstadioE;
typedef struct EstadioE* Estadio;

//constructor
Estadio crearEstadio(char nom[]);

//destructor
void destruirEstadio(Estadio est);

//mostrar
void mostrarEstadio(Estadio est);
void mostrarPersonasEstadio(Estadio est);

//agregar
void agregarPersonaEstadio(Estadio est,char nom[30], int ed);
void agregarMotivoPersona(Estadio est, int pos, char txt[]);
//getters y setter

#endif // ESTADIOS_H_INCLUDED
