#pragma once

#include <vector>

namespace estadisticas {

bool enRango(double valor, double minimo, double maximo);

// Lanza std::invalid_argument si ningun elemento de 'valores' cae en [minimo, maximo].
double promedioValidos(const std::vector<double>& valores,
                        double minimo, double maximo);

}
