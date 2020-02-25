#include "Lista_doble.h"

//--- NODO -----------------

nodo::nodo(char * c){
    this-> caracter = c;
    this->siguiente = NULL;
    this->anterior = NULL;
}
//-------------------------------

//-----------lista doble ----------

Lista_doble::Lista_doble(){
    this->primero = NULL;
    this->ultimo = NULL;
}

void Lista_doble::insertar(char * c){
    nodo * nuevo = new nodo(c);

    if(this->primero == NULL){
        this->primero = nuevo;
        this->ultimo = nuevo;
    }else{
        nuevo->siguiente = this->primero;
        this->primero->anterior = nuevo;
        this->primero = nuevo;
    }
}

void Lista_doble::eliminar_ultimo(){
    
}

nodo * Lista_doble::buscar(string palabra){

}