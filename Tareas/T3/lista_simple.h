
#ifndef LISTA_SIMPLE_H
#define LISTA_SIMPLE_H
#include <iostream>
#include<stdlib.h>

using namespace std;

class nodo
{
    public:
        int id_estudiante;
        string nombre;
        nodo * siguiente;

        nodo(string nombre, int id);

};

class lista_simple
{
    public:
        nodo * primero;

        lista_simple();
        void insertar(int id , string nombre);
        void eliminar(nodo * nodo_eliminar);
        nodo * buscar(int carnet_buscar);

};

#endif // LISTA_SIMPLE_H