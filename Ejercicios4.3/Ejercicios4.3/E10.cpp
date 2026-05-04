#include <iostream>
using namespace std;

int Ejercicio_10() {
    float sueldo1, sueldo2, sueldo3, sueldo4;
    float mayor, descuento;

    cout << "Ingrese el sueldo 1: ";
    cin >> sueldo1;

    cout << "Ingrese el sueldo 2: ";
    cin >> sueldo2;

    cout << "Ingrese el sueldo 3: ";
    cin >> sueldo3;

    cout << "Ingrese el sueldo 4: ";
    cin >> sueldo4;

    mayor = sueldo1;

    if (sueldo2 > mayor) {
        mayor = sueldo2;
    }

    if (sueldo3 > mayor) {
        mayor = sueldo3;
    }

    if (sueldo4 > mayor) {
        mayor = sueldo4;
    }

    cout << "El mayor sueldo es: " << mayor << endl;

    if (mayor > 700) {
        descuento = mayor * 0.02;
        cout << "Se aplica un descuento del 2%" << endl;
        cout << "Monto descontado: " << descuento << endl;
    }
    else {
        cout << "No se aplica descuento" << endl;
    }

    return 0;
}