#include "Ejercicios.h"
#include "estadisticas.h"
#include <iostream>
#include <vector>
#include <stdexcept>

int E4() {
    const double minimo = 0.0;
    const double maximo = 50.0 + S;

    std::cout << "\nEjercicio 4 (S = " << S << "), rango valido [" << minimo << ", " << maximo << "]\n\n";

    // caso normal, un par de valores adentro y listo
    std::vector<double> normales{ 10.0, 20.0, 30.0 };
    double promedioNormal = estadisticas::promedioValidos(normales, minimo, maximo);
    std::cout << "Normal: predije 20, dio " << promedioNormal << "\n";

    // borde inferior, tiene que contar como valido
    bool casoMinimo = estadisticas::enRango(minimo, minimo, maximo);
    std::cout << "Minimo (" << minimo << "): predije true, dio " << casoMinimo << "\n";

    // borde superior, este es el que se rompe si alguien pone '<' en vez de '<='
    bool casoMaximo = estadisticas::enRango(maximo, minimo, maximo);
    std::cout << "Maximo (" << maximo << "): predije true, dio " << casoMaximo << "\n";

    double debajoDelMinimo = -1.0;
    bool casoFueraInf = estadisticas::enRango(debajoDelMinimo, minimo, maximo);
    std::cout << "Fuera por abajo (" << debajoDelMinimo << "): predije false, dio " << casoFueraInf << "\n";

    double arribaDelMaximo = maximo + 1.0;
    bool casoFueraSup = estadisticas::enRango(arribaDelMaximo, minimo, maximo);
    std::cout << "Fuera por arriba (" << arribaDelMaximo << "): predije false, dio " << casoFueraSup << "\n";

    // ninguno de estos cae en el rango, tiene que tirar la excepcion
    std::vector<double> sinValidos{ -5.0, -10.0, maximo + 100.0 };
    try {
        estadisticas::promedioValidos(sinValidos, minimo, maximo);
        std::cout << "Sin validos: predije excepcion, pero no tiro nada (mal)\n";
    } catch (const std::invalid_argument& e) {
        std::cout << "Sin validos: predije excepcion, tiro invalid_argument (" << e.what() << ")\n"; // devuelve el mensaje de error asociado a la excepcion
    }

    return 0;
}
