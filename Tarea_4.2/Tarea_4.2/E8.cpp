#include <iostream>

using namespace std;

int Ejercicio_8() {
    int edad;

    do {
        cout << "Ingrese una edad: ";
        cin >> edad;

        if (edad > 100) {
            cout << "Ha ingresado una edad superior a 100. Fin del programa." << endl;
        }

    } while (edad <= 100);

    return 0;
}