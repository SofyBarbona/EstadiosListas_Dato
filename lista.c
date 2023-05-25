#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

struct ListaE{
    Nodo inicial;
    int tam;
    int tamanioDato;
};

struct NodoE{
    void* item;
    Nodo proximo;
};

//constructor
Lista crearLista(int tamD){
    Lista lista = malloc(sizeof(struct ListaE));

    lista->inicial = NULL;
    lista->tam = 0;
    lista->tamanioDato = tamD;

    return lista;
}
Nodo crearNodo(Lista lista, void* item){
    Nodo nodo = malloc(sizeof(struct NodoE));
    nodo->item = malloc(sizeof(lista->tamanioDato));

    memcpy(nodo->item,item,lista->tamanioDato);
    nodo->proximo = NULL;

    return nodo;
}

//destructor
void destruirLista(Lista lista){
    free(lista);
}

//insertar
void insertar(Lista lista, void* item, int pos){
    Nodo nuevoNodo;

    if(pos==0){
        nuevoNodo = crearNodo(lista,item);
        nuevoNodo->proximo = lista->inicial;
        lista->inicial = nuevoNodo;
    }else{
        Nodo aux = lista->inicial;

        for(int i=0;i<pos-1;i++){
            aux = aux->proximo;
        }

        nuevoNodo = crearNodo(lista,item);
        nuevoNodo->proximo = aux->proximo;
        aux->proximo = nuevoNodo;

    }
    lista->tam++;
}

//getters y setters
void* getElementoLista(Lista lista, int pos){
    Nodo aux = lista->inicial;

    for(int i=0;i<pos;i++){
        aux = aux->proximo;
    }

    return aux->item;
}
int getTamanioLista(Lista lista){
    return lista->tam;
}
Nodo getNodoInicial(Lista lista){
    return lista->inicial;
}
Nodo getNodoProximo(Nodo nodo){
    return nodo->proximo;
}
//mostrar, imprimir --> va en TDA correspondiente
