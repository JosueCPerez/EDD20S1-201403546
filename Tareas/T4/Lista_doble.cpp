#include "Lista_doble.h"

//--- NODO -----------------

nodo::nodo(char c){
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

void Lista_doble::insertar(char c){
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
    if(primero == ultimo == NULL){ // NO HAY ELEMENTOS EN LA LISTA
        std::cout<<"no hay elementos en la lista"<<std::endl;
    }else if(this->primero == this->ultimo){ // solo hay un nodo en la lista
        this->primero = NULL;
        this->ultimo = NULL;
    }else{
        nodo * aux = this->ultimo->anterior;
        this->ultimo->anterior->siguiente = NULL;
        this->ultimo->anterior = NULL;
        this->ultimo = aux;
    }
}

nodo * Lista_doble::buscar(string palabra){
    char  entrada = palabra[0];

    nodo * aux = this->primero;

    while(aux != NULL){
        if(entrada == aux->caracter){
            if(this->verificar_palabra(aux,palabra)){
                return aux;
            }
        }else{
            aux = aux->siguiente;
        }
    }
    return NULL; 
}

bool Lista_doble::verificar_palabra(nodo * inicio , string p){

    nodo * aux = inicio;

    for(int i =0; i<= p.size; i++){
        if(aux->caracter == p[i]){ // compara caracter por caracter para ver si es la palabra buscada
            aux = aux->siguiente;
        }else{
            return false; // si no casan los caracteres no es la palabra
        }
    }

    return true;

}