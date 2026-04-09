#ifndef __LISTA_LIGADA__
#define __LISTA_LIGADA__

#include "Nodo.h"

typedef struct DLista{
    Nodo* head;
    Nodo* tail;

};

DLista* lista_crear();
bool lista_es_vacia(DLista *l);

 bool lista_insertar_vacia(DLista *l, void *info, size_t size):
 bool lista_insertar_inicio(DLista *l, void *info, size_t size);
 bool lista_insertar_fin(DLista *l, void *info, size_t size);
 bool lista_insertar_x_pos(DLista *l, void *info, size_t size);
 #endif