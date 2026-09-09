#include "Ejercicios.h"
#include <iostream>
#include <vector>

void porValor(std::vector<int> datos) {
    std::cout << "  [porValor] direccion interna: " << &datos[0] << "\n";
    datos[0] = -1;
    std::cout << "  [porValor] datos[0] dentro de la funcion = " << datos[0] << "\n";
}

int primero(const std::vector<int>& datos) {
    if (datos.empty()) {
        std::cout << "  [primero] vector vacio: se devuelve 0.\n";
        return 0;
    }
    return datos.front();
}

void incrementar(std::vector<int>& datos, int delta) {
    std::cout << "  [incrementar] direccion interna: " << &datos[0] << "\n";
    for (int& valor : datos) {
        valor += delta;
    }
}

void imprimir(const std::vector<int>& datos) {
    for (int v : datos) std::cout << ' ' << v;
}

int E2() {
    std::cout << "\nEjercicio 2 (S = " << S << "):\n";

    std::vector<int> valores{ S, S + 1, S + 2, S + 3, S + 4 };

    std::cout << "Vector original antes de todo:";
    imprimir(valores);
    std::cout << "\nDireccion del vector original: " << &valores[0] << "\n";

    std::cout << "\n-- Llamando a porValor --\n";
    porValor(valores);
    std::cout << "Vector original despues de porValor:";
    imprimir(valores);
    std::cout << "\n";

    std::cout << "\n-- Llamando a primero --\n";
    int p = primero(valores);
    std::cout << "primero(valores) = " << p << "\n";

    int D_local = 1 + (S % 5);
    std::cout << "\n-- Llamando a incrementar (delta = " << D_local << ") --\n";
    incrementar(valores, D_local);
    std::cout << "Vector original despues de incrementar:";
    imprimir(valores);
    std::cout << "\n";

    std::vector<int> vacio;
    std::cout << "\n-- Llamando a primero con vector vacio --\n";
    int pv = primero(vacio);
    std::cout << "primero(vacio) = " << pv << "\n";

    return 0;
}
