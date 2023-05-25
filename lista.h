#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

struct ListaE;
typedef struct ListaE* Lista;

struct NodoE;
typedef struct NodoE* Nodo;

//constructor
Lista crearLista(int tamD);
Nodo crearNodo(Lista lista, void* item);

//destructor
void destruirLista(Lista lista);

//insertar
void insertar(Lista lista, void* item, int pos);

//getters y setters
void* getElementoLista(Lista lista, int pos);
int getTamanioLista(Lista lista);
Nodo getNodoInicial(Lista lista);
Nodo getNodoProximo(Nodo nodo);

//mostrar, imprimir --> va en TDA correspondiente

#endif // LISTA_H_INCLUDED
