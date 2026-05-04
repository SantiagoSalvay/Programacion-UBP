#include <iostream>

int Ejercicio_6() {
    double ingresosTotales = 0;
    double gastosTotales = 0;
    for (int i = 1; i <= 3; ++i) {
        std::cout << "Programa " << i << std::endl;
        std::cout << "Ingrese los puntos de rating por hora: ";
        double rating;
        std::cin >> rating;
        std::cout << "Ingrese la cantidad de horas de duración: ";
        double horas;
        std::cin >> horas;
        if (rating < 5) {
            std::cout << "El programa " << i << " no cumple con el minimo de 5 puntos." << std::endl;
        }
        double ingresosProg = rating * horas * 1.40;
        double gastosProg = horas * 0.75;
        ingresosTotales += ingresosProg;
        gastosTotales += gastosProg;
    }
    double resultadoFinal = ingresosTotales - gastosTotales;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "Ingresos totales de la empresa: $" << ingresosTotales << std::endl;
    std::cout << "Gastos totales de la empresa: $" << gastosTotales << std::endl;
    std::cout << "Resultado final: $" << resultadoFinal << std::endl;
    if (resultadoFinal > 0) {
        std::cout << "La empresa obtuvo ganancias." << std::endl;
    } else if (resultadoFinal < 0) {
        std::cout << "La empresa obtuvo perdidas." << std::endl;
    } else {
        std::cout << "La empresa quedó en equilibrio)." << std::endl;
    }
    return 0;
}