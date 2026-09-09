#include <iostream>
#include "Ejercicios.h"

// Datos personales de la guia (Clase 1 - Modularizacion y contratos).
const int D = 46;              // dos ultimos digitos de la matricula
const int S = 10 + (D % 41);   // semilla personal, se usa en todos los ejercicios

int main() {
    int opcion = 0;
    do {
        std::cout << "\nElija un ejercicio:\n";
        std::cout << "1. Ejercicio 1 - Radiografia de un main monolitico\n";
        std::cout << "2. Ejercicio 2 - Laboratorio de paso de parametros\n";
        std::cout << "3. Ejercicio 3 - Tres archivos y dos clases de error\n";
        std::cout << "4. Ejercicio 4 - Pruebas antes de confiar\n";
        std::cout << "5. Ejercicio 5 - Mini-proyecto: monitor de mediciones\n";
        std::cout << "6. Salir\n";
        std::cout << "Opcion: ";

        if (!(std::cin >> opcion)) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            opcion = 0;
        }

        switch (opcion) {
            case 1: E1(); break;
            case 2: E2(); break;
            case 3: E3(); break;
            case 4: E4(); break;
            case 5: E5(); break;
            case 6: std::cout << "Saliendo...\n"; break;
            default: std::cout << "Opcion invalida. Debe elegir un valor entre 1 y 6.\n"; break;
        }
    } while (opcion != 6);

    return 0;
}
