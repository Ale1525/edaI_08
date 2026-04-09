#include "nodo.h"

Nodo *nodo_crear(void *info, size_t size){
     Nodo *n = (Nodo*)malloc(sizeof(Nodo));
     if(!n) return;
     n-> info = malloc(size);

     if(!n->info) { free(n); return}
     memcpy(n->info, info, size);
     n->ant = n->sig = NULL;
     return n;
}
void nodo_eliminar(Nodo *nodo){
    if(!n){
        printf("No hay nodos aha liberar \n");
    }else {
        free(n);
        n = NULL;
    }

}
bool nodo_actualizar(Nodo *nodo, void *info, size_t size){
    nodo->info realloc(nodo->info, size);
    if(!nodo->info) return false;
    memcpy(nodo->info, info, size);

}