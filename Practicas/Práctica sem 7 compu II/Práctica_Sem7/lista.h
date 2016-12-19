
#ifndef LISTA_H_INCLUDED
#define LISTA_H_INCLUDED

#ifndef _LISTA_H_INCLUDED
#define _LISTA_H_INCLUDED
#include "triplets.h"

typedef int Elemento_t;

/* Definición adelantada del TDA Lista */
typedef struct Lista_CDT* Lista_ADT;


Lista_ADT construirLista(int i, Lista_ADT p);

void destruirLista(Lista_ADT p);

void asignarElemento(Lista_ADT p, Elemento_t e);

void asignarSiguiente(Lista_ADT p, Lista_ADT e);

Elemento_t obtenerElemento(Lista_ADT p);

Lista_ADT obtenerSiguiente(Lista_ADT p);

bool ListaVacia (Lista_ADT p);

void avanzarSiguiente(Lista_ADT *p);


#endif // LISTA_H_INCLUDED

#endif // LISTA_H_INCLUDED
