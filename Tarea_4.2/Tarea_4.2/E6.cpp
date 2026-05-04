#include <iostream>
using namespace std;

int Ejercicio_6() {
    char caracter;
    int contador = 0;

    for (int i = 1; i <= 15; i++) {
        cin >> caracter;

        if (caracter == 'A') {
            contador++;
        }
    }

    cout << "Cantidad de letras A: " << contador << endl;
    return 0;
}