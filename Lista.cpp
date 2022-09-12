#include "Lista.h"
using namespace std;

Lista::Lista(Nodo *sigPos){
    this->h=sigPos;
}

Lista::Lista()
{
    h=nullptr;
    //ctor
}

void Lista::insertarInicio(int d){

    //Creamos un un nodo auxiliar
    Nodo *aux=new Nodo(d,nullptr);

    //Si el nodo h es nulo, el auxiliar toma esa posicion
    if(h==nullptr){
        h=aux;
    }
    //sino, el auxiliar toma el valor de la parte siguiente posicion de h
    else{
        aux->sig=h;
        h=aux;
    }
}

void Lista::mostrar(void){

    Nodo *aux=h;

    if(!aux){
        cout<<"Lista vacia"<<endl;
    }
    else{
        while(aux){
            cout<<aux->dato<<", ";
            aux=aux->sig;
        }
    }
}
