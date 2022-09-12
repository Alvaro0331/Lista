#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"
#include<iostream>

class Lista
{
    public:
        Lista();
        Lista(Nodo*);

        Nodo *h;

        //Operaciones

        void insertarInicio(int);
        void mostrar(void);

};

#endif // LISTA_H
