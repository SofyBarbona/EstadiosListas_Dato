#include <stdio.h>
#include <stdlib.h>
#include "Estadios.h"
#include "Personas.h"
#include "Motivo.h"
#include "lista.h"

//Crear un programa que permita enlistar a las Personas que asistieron en un Estadio de
//fútbol, además cada Persona tiene una lista de Motivos por los que asistir al estadio. (2 o 3
//personas con 2 o 3 motivos, lo importante son las dos listas con Void).

int main()
{
    Estadio estadio1 = crearEstadio("Messi");

    agregarPersonaEstadio(estadio1,"Sofia",24);
    agregarPersonaEstadio(estadio1,"Hector",59);
    agregarPersonaEstadio(estadio1,"Maria",45);

    agregarMotivoPersona(estadio1,0,"Quiere ver a Messi");
    agregarMotivoPersona(estadio1,0,"Le gusta River");
    agregarMotivoPersona(estadio1,0,"Nunca fue a un estadio");

    agregarMotivoPersona(estadio1,1,"Es apasionado del futbol");
    agregarMotivoPersona(estadio1,1,"Quiere ver jugar a la seleccion");

    agregarMotivoPersona(estadio1,2,"Acompania a su familia");
    agregarMotivoPersona(estadio1,2,"Le divierte");

    mostrarEstadio(estadio1);


    return 0;
}
