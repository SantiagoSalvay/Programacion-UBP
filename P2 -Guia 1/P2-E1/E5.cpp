// Santiago Salvay - Legajo: 189546 - S: 546 - Ejercicio 5 - 11/08/2026
#include <iostream>
using namespace std;

// Versión original conservada (renombrada). No se modifica su firma ni su comportamiento.
double calcularDescuentoOriginal(int categoria, int antiguedad, double monto, bool activo)
{
    double d = 0.0;
    if (activo) {
        if (monto > 0) {
            if (categoria == 1) {
                if (antiguedad >= 5) { d = monto * 0.20; }
                else {
                    if (antiguedad >= 2) d = monto * 0.10;
                    else d = monto * 0.05;
                }
            } else {
                if (categoria == 2) {
                    if (antiguedad >= 5) d = monto * 0.15;
                    else d = monto * 0.07;
                } else {
                    if (categoria == 3) {
                        if (monto > 10000) d = monto * 0.12;
                        else d = monto * 0.03;
                    } else d = 0.0;
                }
            }
        } else { d = -1.0; }
    } else { d = -2.0; }
    return d;
}

// Función auxiliar: calcula el porcentaje según categoría/antiguedad/monto.
// Precondición: activo == true y monto > 0.
double porcentajeDescuento(int categoria, int antiguedad, double monto)
{
    if (categoria == 1) {
        if (antiguedad >= 5) return 0.20;
        if (antiguedad >= 2) return 0.10;
        return 0.05;
    }
    if (categoria == 2) {
        if (antiguedad >= 5) return 0.15;
        return 0.07;
    }
    if (categoria == 3) {
        if (monto > 10000) return 0.12;
        return 0.03;
    }
    return 0.0;
}

// Refactorizada: cláusulas de guarda para los casos de rechazo.
double calcularDescuento(int categoria, int antiguedad, double monto, bool activo)
{
    if (!activo) return -2.0;
    if (monto <= 0) return -1.0;
    return monto * porcentajeDescuento(categoria, antiguedad, monto);
}

// Datos de ejemplo del enunciado/parametrización (no influyen en la lógica).
const int a = 3;
const int N = 57;
const int m = 5;
const int T = 4;

int Ejercicio5()
{
    struct Caso { int cat; int ant; double monto; bool activo; const char* rama; };

    Caso casos[] = {
        {1, 6, 1000.0, true,  "cat1, ant>=5"},
        {1, 3, 1000.0, true,  "cat1, 2<=ant<5"},
        {1, 1, 1000.0, true,  "cat1, ant<2"},
        {2, 5,  500.0, true,  "cat2, ant>=5"},
        {2, 1,  500.0, true,  "cat2, ant<5"},
        {3, 0, 20000.0, true, "cat3, monto>10000"},
        {3, 0,  8000.0, true, "cat3, monto<=10000"},
        {9, 0,  1000.0, true, "categoria no contemplada"},
        {1, 6,     0.0, true, "monto <= 0"},
        {1, 6,  1000.0, false, "activo == false"}
    };

    int diferencias = 0;
    for (auto &c : casos) {
        double orig = calcularDescuentoOriginal(c.cat, c.ant, c.monto, c.activo);
        double refac = calcularDescuento(c.cat, c.ant, c.monto, c.activo);
        if (orig != refac) {
            diferencias++;
            cout << "Diferencia en rama '" << c.rama << "': orig=" << orig << " refac=" << refac << '\n';
        }
    }

    cout << "Diferencias encontradas: " << diferencias << '\n';
    return 0;
}
