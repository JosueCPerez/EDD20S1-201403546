#include "lista_simple.h"

//------- NODO----------
nodo::nodo(string name , int ident)
{
    this->nombre = name;
    this->id_estudiante = ident;
    this->siguiente = NULL;
}

//---------------------------

//-------LISTA---------------
 
 lista_simple:: lista_simple(){
     this->primero = NULL;
 }


 void lista_simple::insertar(int id , string nombre){
     nodo * nuevo = new nodo(nombre, id);

    if(this->primero==NULL){
        this->primero = nuevo;
    }else{
        nuevo->siguiente = this->primero;
        this->primero = nuevo;
    }
 }
 
 void lista_simple::eliminar(nodo * nodo_eliminar){
     nodo * aux = this->primero;

    if(nodo_eliminar == this->primero){
        this->primero = this->primero->siguiente;
        aux->siguiente = NULL;
    }else{
        nodo * aux2 = this->primero;

        while(aux != NULL){
            if(aux == nodo_eliminar){
                aux2->siguiente = aux->siguiente;
                aux->siguiente = NULL;
            }else{
                aux2 = aux;
                aux= aux->siguiente;
            }
        }
    }
 }
 
 nodo * lista_simple::buscar(int carnet_buscar){
     nodo * aux = this->primero;
     while(aux != NULL){
         if(aux->id_estudiante == carnet_buscar){
             return aux;
         }else{
             aux= aux->siguiente;
         }
     }
     return NULL; // SI NO LO ENCUENTRA RETORNARA NULL
 }