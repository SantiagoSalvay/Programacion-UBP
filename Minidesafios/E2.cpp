#include <iostream>

int Ejercicio2() {
	struct Persona {
		std::string nombre;
		int edad;
	};
	Persona persona1, persona2;
	std::cout << "Ingrese el nombre de la primera persona: ";
	std::cin >> persona1.nombre;
	std::cout << "Ingrese la edad de la primera persona: ";
	std::cin >> persona1.edad;
	std::cout << "Ingrese el nombre de la segunda persona: ";
	std::cin >> persona2.nombre;
	std::cout << "Ingrese la edad de la segunda persona: ";
	std::cin >> persona2.edad;
	if (persona1.edad > persona2.edad) {
		std::cout << persona1.nombre << " es mayor que " << persona2.nombre << " por " << (persona1.edad - persona2.edad) << " anos." << std::endl;
	} else if (persona2.edad > persona1.edad) {
		std::cout << persona2.nombre << " es mayor que " << persona1.nombre << " por " << (persona2.edad - persona1.edad) << " anos." << std::endl;
	} else {
		std::cout << "Ambas personas tienen la misma edad." << std::endl;
	}
	return 0;
}