#include <iostream>
#include "Punto.h"
#include "Vector.h"
using namespace std;

int main()
{
    Vector v;
    v.modificarPuntoInicial(2,2);
    v.modificarPuntoFinal(2,5);
    v.imprimir();
    cout << v.calcularModulo() << endl;
    return 0;
}
