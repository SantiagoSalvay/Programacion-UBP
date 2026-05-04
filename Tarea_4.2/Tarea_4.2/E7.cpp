#include <iostream>

using namespace std;

int Ejercicio_7() {
    double altura, suma = 0;
    int contador = 0;

    cin >> altura;

    while (altura >= 0.5) {
        suma += altura;
        contador++;

        cout << "Ingrese la siguiente altura: ";
        cin >> altura;
    }

    if (contador > 0) {
        double promedio = suma / contador;
        cout << "El promedio de las " << contador << " alturas validas es: " << promedio << endl;
    }
    else {
        cout << "No se ingresaron alturas validas." << endl;
    }

    return 0;
}