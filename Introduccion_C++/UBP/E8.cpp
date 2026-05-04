#include <iostream>
#include <string>

int Ejercicio8() {
	const int cantidadNombres = 5;
	std::string nombres[cantidadNombres];
	std::cout << "Ingrese " << cantidadNombres << " nombres:" << std::endl;
	for (int i = 0; i < cantidadNombres; ++i) {
		std::cout << "Nombre " << (i + 1) << ": ";
		std::getline(std::cin, nombres[i]);
	}
	std::cout << "\nLos nombres ingresados son:" << std::endl;
	for (int i = 0; i < cantidadNombres; ++i) {
		std::cout << "Nombre " << (i + 1) << ": " << nombres[i] << std::endl;
	}
	return 0;
}