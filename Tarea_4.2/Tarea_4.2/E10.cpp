#include <iostream>
int Ejercicio_10() {
    int contador = 0;
    float nota;
    for (int i = 1; i <= 10; i++) {
        std::cout << "Ingrese una nota: ";
        std::cin >> nota;
        if (nota >= 6) {
            contador++;
        }
    }
    std::cout << "Cantidad de notas mayores o iguales a 6: " << contador << std::endl;
    return 0;
}