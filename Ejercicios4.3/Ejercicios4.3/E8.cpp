#include <iostream>

using namespace std;

int Ejercicio_8() {
    float a, b, c;
    float ang1, ang2, ang3;

    cout << "Ingrese las longitudes de los tres lados: " << endl;
    cin >> a >> b >> c;

    cout << "Ingrese los tres angulos (en grados): " << endl;
    cin >> ang1 >> ang2 >> ang3;


    bool ladosValidos = (a + b > c) && (a + c > b) && (b + c > a);


    bool angulosValidos = (ang1 + ang2 + ang3 == 180);

    cout << "\n--- Resultado ---" << endl;
    if (ladosValidos && angulosValidos) {
        cout << "ES UN TRIANGULO: Los datos cumplen con todas las reglas geometricas." << endl;
    }
    else {
        cout << "NO ES UN TRIANGULO: ";
        if (!ladosValidos) {
            cout << "\n- Falla la desigualdad triangular (un lado es demasiado largo).";
        }
        if (!angulosValidos) {
            cout << "\n- La suma de los angulos no es 180 grados.";
        }
        cout << endl;
    }

    return 0;
}