#include <iostream>

int Ejercicio_4() {
	double kilo, cantidad, precio_unidad, total = 0;
	std::string nombre;
	for (int i = 0; i < 3; i++) {
		std::cout << "Ingrese el nombre de su producto:" << std::endl;
		std::cin >> nombre;
		std::cout << "Ingrese el precio por kilo:" << std::endl;
		std::cin >> kilo;
		std::cout << "Ingrese la cantidad:" << std::endl;
		std::cin >> cantidad;
		precio_unidad = cantidad * kilo;
		total += precio_unidad;
		std::cout << "El precio total de " << nombre << " es: $" << precio_unidad << std::endl;
	}
	if (total > 100) {
		total *= 0.90; 
		std::cout << "Se aplico un descuento del 10%, entonces su precio total es: $" << total << std::endl;
	} else {
		std::cout << "Su precio total a pagar es: $" << total << std::endl;
	}
	return 0;
}