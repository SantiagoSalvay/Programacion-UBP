#include <iostream>

int Ejercicio6() {
	const int cantidadEdades = 5;
	int edades[cantidadEdades];
	int sumaEdades = 0;
	std::cout << "Ingrese " << cantidadEdades << " edades:" << std::endl;
	for (int i = 0; i < cantidadEdades; ++i) {
		std::cout << "Edad " << (i + 1) << ": ";
		std::cin >> edades[i];
		sumaEdades += edades[i];
	}
	double promedio = static_cast<double>(sumaEdades) / cantidadEdades;
	std::cout << "El promedio de las edades es: " << promedio << std::endl;
	return 0;
}