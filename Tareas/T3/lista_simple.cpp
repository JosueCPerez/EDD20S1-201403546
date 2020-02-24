#include "lista_simple.h"

//------- NODO----------
nodo::nodo(string name , int ident)
{
    nombre = name;
    id_estudiante = ident;
    siguiente = NULL;
}