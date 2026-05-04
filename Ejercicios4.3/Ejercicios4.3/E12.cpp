#include <iostream>
#include <cmath>
using namespace std;

int Ejercicio_12() {
    float t[4], promedio = 0;
    for (int i = 0; i < 4; i++) {
        cout << "Ingrese la temperatura " << i + 1 << ": ";
        cin >> t[i];
        promedio += t[i];
    }

    promedio /= 4;

    cout << "El promedio es: " << promedio << endl;
    for (int i = 0; i < 4; i++) {
        if (fabs(t[i] - promedio) > 10.5) {
            cout << "Temperatura " << i + 1
                << " supera la diferencia: " << t[i] << endl;
        }
    }

    return 0;
}