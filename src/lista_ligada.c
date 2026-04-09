#include"lista_ligada.h"



DLista* lista_crear(){
    DLista *l = (DLista*)malloc(sizeof(DLista));
    l->head = l->tail = NULL;
    return l;
}
bool lista_es_vacia(DLista *l){
    if(!l) return true;
}
 bool lista_insertar_vacia(DLista *l, void *info, size_t size){
     if(!l) return false;
     Nodo*n = nodo_crear(info, size);
     l->head = l->tail = n;
     return true;
 }
 bool lista_insertar_inicio(DLista *l, void *info, size_t size){
    if(!l)return false;
    Nodo *nuevo = nodo_crear(info, size);
    n->sig = l->head;
    l->head->an = n;
    l->head = n;
    return true;

 }
 bool lista_insertar_fin(DLista *l, void *info, size_t size){
     if(!l)return false;
    Nodo *nuevo = nodo_crear(info, size);
    n-ant = l->tail;
    l->tail->sig =n;
    l->tail=n;
    return true;

 }
 bool lista_insertar_x_pos(DLista *l, void *info, size_t size){
    if(!l) return false;
    if(DLista_es_vacia(l)) return 
 }
