#include <iostream>

int Ejercicio10() {
	const std::string claveCorrecta = "secreta";
	std::string claveIngresada;
	do {
		std::cout << "Ingrese la clave: ";
		std::cin >> claveIngresada;
		if (claveIngresada != claveCorrecta) {
			std::cout << "Clave incorrecta. Intente nuevamente." << std::endl;
		}
	} while (claveIngresada != claveCorrecta);
	std::cout << "Clave correcta. Acceso concedido." << std::endl;
	return 0;
}