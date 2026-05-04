#include <iostream>

int Ejercicio3() {
	int numero;
	std::cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
	std::cin >> numero;
	std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
	for (int i = 1; i <= 10; ++i) {
		std::cout << numero << " x " << i << " = " << numero * i << std::endl;
	}
	return 0;
}