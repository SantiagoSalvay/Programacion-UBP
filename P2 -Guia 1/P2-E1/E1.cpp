// Santiago Salvay - Legajo: 189546 - S: 546 - Ejercicio 1 - 09/08/2026
#include <iostream>
using namespace std;

int Ejercicio1() {
    const int S = 546;
    const int a = (S % 7) + 3;
    const int N = 40 + (S % 23);

    int suma = 0;
    int i = 1;

    while (i <= N) {
        if (i % a == 0) {
            suma += i;
        }
        i++; // va aca para que avance siempre, no solo en el else
    }

    int k = N / a; // cantidad de multiplos de a hasta N
    int suma_formula = a * (k * (k + 1) / 2);

    cout << "a = " << a << ", N = " << N << endl;
    cout << "Resultado del programa: " << suma << endl;
    cout << "Resultado formula cerrada: " << suma_formula << endl;
    cout << "Diferencia: " << suma - suma_formula << endl;

    return 0;
}
