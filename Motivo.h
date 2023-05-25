#ifndef MOTIVO_H_INCLUDED
#define MOTIVO_H_INCLUDED

struct MotivoE;
typedef struct MotivoE* Motivo;

//constructor
Motivo crearMotivo(char txt[]);

//destructor
void destruirMotivo(Motivo mo);

//mostrar
void mostrarMotivo(Motivo mo);

//getters y setters

#endif // MOTIVO_H_INCLUDED
