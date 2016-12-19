#ifndef _LISTA_H_INCLUDED
#define _LISTA_H_INCLUDED
#include "triplets.h"

typedef int Elemento_t;

/* Definición adelantada del TDA Lista */
typedef struct Lista_CDT* Lista_ADT;

typedef struct {
    Elemento_t Primero;
    Lista_ADT ventana;
}Lista_CDT;

Lista_ADT  L_Crear (void) {
    Lista_ADT P;
    new (P);
    p->primero=NULL;
    p->ventana=NUll;
    return P;
}

/* Lo que sale en el Modelo:

Lista_ADT construirLista(int i, Lista_ADT p){
    //_pre (p!=NULL);
    p->Primero=i;
    p->ventana=NULL;
*/

void L_Destruir(Lista_ADT p){//void destrLista(Lista_ADT p)
    _pre (p!=NULL);
    free(p);
    p=NULL;
}

Lista_ADT L_InsertAnt(Lista_ADT p , Elemento_t i){  //: LISTA x ELEM -> LISTA
    _pre (p!=NULL);
     Lista_ADT Nuevo;
     new (Nuevo);
     Nuevo->primero = i;
     Nuevo->ventana = p;
     p= Nuevo;
     return p;
}
Lista_ADT L_InsertPos(Lista_ADT p , Elemento_t i){
    Lista_ADT u;
    Lista_ADT Lista_Nueva;
    Lista_Nueva->primero=i;
    Lista_Nueva->ventana=NULL;
    u=p;
    while (u->ventana!=NULL){
        u=u->ventana;
    }
    Lista_Nueva->ventana=u->ventana;
    u->ventana = Lista_Nueva;
    //return p;  ????
}


void asignarElemento(Lista_ADT p, Elemento_t e); //Es lo mismo que "Lista_ADT L_InsertAnt" no?

void asignarSiguiente(Lista_ADT p, Lista_ADT e){ // Est funcion es Como concatenar dos listas??
    Lista_ADT u;
    u=p;
    while (u->ventana!=NULL){
        u=u->ventana;
    }
    u->ventana=e;
    //  return p; ?????
}


Elemento_t obtenerElemento(Lista_ADT p);

Lista_ADT obtenerSiguiente(Lista_ADT p);

bool ListaVacia (Lista_ADT p);

void avanzarSiguiente(Lista_ADT *p);


#endif // LISTA_H_INCLUDED
