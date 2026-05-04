#include <iostream>

using namespace std;

int Ejercicio_7() {
    float p1, p2, tp, rec;

    
    cout << "Nota Primer Parcial: "; cin >> p1;
    cout << "Nota Segundo Parcial: "; cin >> p2;
    cout << "Promedio de Trabajos Practicos: "; cin >> tp;
    cout << "Nota Recuperatorio (ingresar 0 si no rindio): "; cin >> rec;

 
    if (p1 > 8 and p2 > 8 and tp > 8 and rec == 0) {
        cout << "\nCondicion Final: PROMOCIONAL" << endl;
    }

   
    else if (tp >= 4 and tp <= 8) {
        bool parcialesAprobados = false;

        if (p1 >= 4 and p2 >= 4) parcialesAprobados = true;
        else if (rec >= 4 and p2 >= 4) parcialesAprobados = true;
        else if (p1 >= 4 and rec >= 4) parcialesAprobados = true;

        if (parcialesAprobados) {
            cout << "\nCondicion Final: REGULAR" << endl;
        }
        else {
            cout << "\nCondicion Final: LIBRE" << endl;
        }
    }
    else {
        cout << "\nCondicion Final: LIBRE" << endl;
    }
    return 0;
}