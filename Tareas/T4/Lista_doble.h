
#ifndef LISTA_DOBLE_H
#define LISTA_DOBLE_H
#include <iostream>
#include<stdlib.h>

using namespace std;

class nodo
{
    public:
        char * caracter;
        nodo * siguiente;
        nodo* anterior;
        nodo(char * carc);

};

class Lista_doble
{
    public:
        nodo * primero;
        nodo * ultimo;

        Lista_doble();
        void insertar(char * c);
        void eliminar_ultimo();
        nodo * buscar(string palabra);

};

#endif // LISTA_DOBLE_H