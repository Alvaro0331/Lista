#include <iostream>
#include "Lista.h"
#include "Nodo.h"

using namespace std;

int main()
{
    Lista *lis=new Lista();
    lis->mostrar();

    lis->insertarInicio(5);
    lis->insertarInicio(9);
    lis->insertarInicio(0);
    lis->insertarInicio(1);

    lis->mostrar();
    return 0;
}
