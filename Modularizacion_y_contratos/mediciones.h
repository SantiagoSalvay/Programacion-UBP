#pragma once

#include <vector>

namespace mediciones {

bool esValida(double valor, double minimo, double maximo);

// Lanza std::invalid_argument si ninguna medicion cae en [minimo, maximo].
double promedio(const std::vector<double>& valores, double minimo, double maximo);

int contarValidas(const std::vector<double>& valores, double minimo, double maximo);

// Lanza std::invalid_argument si ninguna medicion cae en [minimo, maximo].
double minimoValida(const std::vector<double>& valores, double minimo, double maximo);

// Lanza std::invalid_argument si ninguna medicion cae en [minimo, maximo].
double maximoValida(const std::vector<double>& valores, double minimo, double maximo);

}
