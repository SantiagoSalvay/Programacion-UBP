#include "Ejercicios.h"
#include "mediciones.h"
#include <iostream>
#include <vector>
#include <stdexcept>

namespace {

void mostrarInvalidas(const std::vector<double>& valores, double minimo, double maximo) {
    std::cout << "Descartadas (fuera de [" << minimo << ", " << maximo << "]): ";
    bool alguna = false;
    for (double valor : valores) {
        if (!mediciones::esValida(valor, minimo, maximo)) {
            std::cout << valor << ' ';
            alguna = true;
        }
    }
    if (!alguna) std::cout << "ninguna";
    std::cout << "\n";
}

// Reune las cuatro funciones del modulo mediciones para producir el resumen de un lote.
void mostrarResumen(const std::vector<double>& valores, double minimo, double maximo) {
    mostrarInvalidas(valores, minimo, maximo);

    int validas = mediciones::contarValidas(valores, minimo, maximo);
    std::cout << "Validas: " << validas << " de " << valores.size() << "\n";

    try {
        double prom = mediciones::promedio(valores, minimo, maximo);
        double minVal = mediciones::minimoValida(valores, minimo, maximo);
        double maxVal = mediciones::maximoValida(valores, minimo, maximo);
        std::cout << "Promedio: " << prom << "\n";
        std::cout << "Minimo valido: " << minVal << "\n";
        std::cout << "Maximo valido: " << maxVal << "\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Sin mediciones validas: " << e.what() << "\n";
    }
}

}

int E5() {
    const double minimo = -static_cast<double>(S);
    const double maximo = 2.0 * S;

    std::cout << "\nEjercicio 5 (S = " << S << "), rango valido [" << minimo << ", " << maximo << "]\n";

    // Lote de 8 mediciones: incluye -S, 2*S y dos invalidas (una por debajo, una por arriba).
    std::vector<double> lote{
        -static_cast<double>(S), 0.0, 5.0, static_cast<double>(S),
        2.0 * S, -static_cast<double>(S) - 5.0, 2.0 * S + 10.0, 3.0
    };

    std::cout << "\nEscenario 1\n";
    mostrarResumen(lote, minimo, maximo); // punto de interrupcion sugerido: dentro de mediciones::promedio

    std::cout << "\nEscenario 2\n";
    std::vector<double> sinValidas{ minimo - 1.0, minimo - 2.0, maximo + 1.0, maximo + 50.0 };
    mostrarResumen(sinValidas, minimo, maximo);

    // Modificacion final: el limite superior pasa a 3*S. El algoritmo de mediciones.cpp
    // no cambia; solo se redefine el valor que se le pasa como parametro 'maximo'.
    std::cout << "\nModificacion final\n";
    const double nuevoMaximo = 3.0 * S;
    std::cout << "Nuevo rango valido [" << minimo << ", " << nuevoMaximo << "]\n";
    mostrarResumen(lote, minimo, nuevoMaximo);

    return 0;
}
