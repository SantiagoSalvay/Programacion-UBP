#include <iostream>
using namespace std;

int Ejercicio_11() {
    int num[4], aux;

    for (int i = 0; i < 4; i++) {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> num[i];
    }
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (num[i] > num[j]) {
                aux = num[i];
                num[i] = num[j];
                num[j] = aux;
            }
        }
    }
    cout << "Numeros ordenados de menor a mayor: ";
    for (int i = 0; i < 4; i++) {
        cout << num[i] << " ";
    }

    return 0;
}