#include "Nodo.h"

Nodo::Nodo(int dato, Nodo *sig){
    this->dato=dato;
    this->sig=sig;
}
Nodo::Nodo()
{
    dato=0;
    sig=nullptr;
    //ctor
}
