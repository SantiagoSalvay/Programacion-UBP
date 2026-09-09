#include "estadisticas.h"
#include <stdexcept>

namespace estadisticas {

bool enRango(double valor, double minimo, double maximo) {
    return valor >= minimo && valor <= maximo;
}

double promedioValidos(const std::vector<double>& valores,
                        double minimo, double maximo) {
    double suma = 0.0;
    int cantidad = 0;

    for (double valor : valores) {
        if (enRango(valor, minimo, maximo)) {
            suma += valor;
            ++cantidad;
        }
    }

    if (cantidad == 0) {
        throw std::invalid_argument("promedioValidos: ningun valor cae dentro del rango");
    }

    return suma / cantidad;
}

}
