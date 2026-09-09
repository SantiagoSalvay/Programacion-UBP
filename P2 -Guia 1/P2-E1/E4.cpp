// Santiago Salvay - Legajo: 189546 - S: 546 - Ejercicio 4 - 09/08/2026
#include <iostream>
#include <limits>
#include <string>
using namespace std;

const int S = 546;

bool leerEntero(int& valor) {
    // FIX-1: limpiar cin si el usuario escribe texto
    if (!(cin >> valor)) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

bool leerOpcion(int& opcion) {
    string entrada;
    if (!getline(cin, entrada) || entrada.empty()) {
        cout << "Entrada invalida. Intente de nuevo.\n";
        return false;
    }

    try {
        size_t pos = 0;
        opcion = stoi(entrada, &pos);
        if (pos != entrada.size()) { // rechaza cosas como "1abc"
            cout << "Entrada invalida. Intente de nuevo.\n";
            return false;
        }
    }
    catch (...) {
        cout << "Entrada invalida. Intente de nuevo.\n";
        return false;
    }

    return true;
}

bool esPrimo(int n) {
    // FIX-2: 1 y negativos no son primos
    if (n < 2) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int Ejercicio4() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // limpia el enter que queda del menu principal
    int opcion = 0;

    do {
        cout << "1. Multiplos\n2. Primo\n3. Sucesion\n4. Salir\n";
        cout << ">> ";

        if (!leerOpcion(opcion)) {
            continue;
        }

        // FIX-4: validar rango del menu
        if (opcion < 1 || opcion > 4) {
            cout << "Opcion invalida. Elija un numero del 1 al 4.\n";
            continue;
        }

        if (opcion == 1) {
            int a = 0;
            int N = 0;

            cout << "Ingrese a y N: ";
            if (!leerEntero(a) || !leerEntero(N)) {
                cout << "Entrada invalida. Intente de nuevo.\n";
                continue;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            // FIX-3: a no puede ser 0
            if (a == 0) {
                cout << "Error: a no puede ser cero.\n";
                continue;
            }

            int suma = 0;
            for (int i = 1; i <= N; i++) {
                if (i % a == 0) {
                    suma += i;
                }
            }

            cout << suma << endl;
        }
        else if (opcion == 2) {
            int n = 0;
            cout << "Ingrese n: ";

            if (!leerEntero(n)) {
                cout << "Entrada invalida. Intente de nuevo.\n";
                continue;
            }
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            if (esPrimo(n)) {
                cout << "Primo\n";
            }
            else {
                cout << "No primo\n";
            }
        }
        else if (opcion == 3) {
            int semilla = S;
            cout << "Usando S = " << semilla << " para la sucesion.\n";

            int a = semilla % 10;
            int b = a;

            cout << a << " " << b << " ";

            for (int i = 2; i < 15; i++) {
                int c = a + b;
                cout << c << " ";
                a = b;
                b = c;
            }
            cout << endl;
        }

    } while (opcion != 4);

    return 0;
}
