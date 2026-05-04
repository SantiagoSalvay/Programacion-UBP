#include <iostream>

int Ejercicio_9() {
    int suma = 0;
    for (int i = 5; i <= 100; i += 5) {
        suma += i;
    }
    std::cout << "La suma total de los multiplos de 5 entre 1 y 100 es: " << suma << std::endl;
    return 0;
}