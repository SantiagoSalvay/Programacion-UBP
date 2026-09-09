#include "mediciones.h"
#include <stdexcept>

namespace mediciones {

bool esValida(double valor, double minimo, double maximo) {
    return valor >= minimo && valor <= maximo;
}

double promedio(const std::vector<double>& valores, double minimo, double maximo) {
    double suma = 0.0;
    int cantidad = 0;

    for (double valor : valores) {
        if (esValida(valor, minimo, maximo)) {
            suma += valor;
            ++cantidad;
        }
    }

    if (cantidad == 0) {
        throw std::invalid_argument("promedio: ninguna medicion cae dentro del rango");
    }

    return suma / cantidad;
}

int contarValidas(const std::vector<double>& valores, double minimo, double maximo) {
    int cantidad = 0;
    for (double valor : valores) {
        if (esValida(valor, minimo, maximo)) {
            ++cantidad;
        }
    }
    return cantidad;
}

double minimoValida(const std::vector<double>& valores, double minimo, double maximo) {
    bool encontrado = false;
    double menor = 0.0;

    for (double valor : valores) {
        if (esValida(valor, minimo, maximo) && (!encontrado || valor < menor)) {
            menor = valor;
            encontrado = true;
        }
    }

    if (!encontrado) {
        throw std::invalid_argument("minimoValida: ninguna medicion cae dentro del rango");
    }

    return menor;
}

double maximoValida(const std::vector<double>& valores, double minimo, double maximo) {
    bool encontrado = false;
    double mayor = 0.0;

    for (double valor : valores) {
        if (esValida(valor, minimo, maximo) && (!encontrado || valor > mayor)) {
            mayor = valor;
            encontrado = true;
        }
    }

    if (!encontrado) {
        throw std::invalid_argument("maximoValida: ninguna medicion cae dentro del rango");
    }

    return mayor;
}

}
