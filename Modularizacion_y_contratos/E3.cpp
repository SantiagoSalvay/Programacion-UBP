#include "Ejercicios.h"
#include "estadisticas.h"
#include <iostream>
#include <vector>

int E3() {
    const double minimo = 0.0;
    const double maximo = 50.0 + S;

    std::vector<double> valores{ 12.5, -3.0, 40.0, 70.2, static_cast<double>(S), 65.0, 20.0 };

    std::cout << "\nEjercicio 3 (S = " << S << "):\n";
    std::cout << "Rango valido: [" << minimo << ", " << maximo << "]\n";

    double promedio = estadisticas::promedioValidos(valores, minimo, maximo);
    std::cout << "Promedio de los valores dentro del rango = " << promedio << "\n";

    return 0;
}
