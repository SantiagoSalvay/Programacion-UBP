#include <iostream>
#include "Ejercicios.h"

int main() {
	int opcion = 0;
	while (opcion != 6) {
		std::cout << "Ingrese el numero del ejercicio para ejecutarlo e ingrese el numero 6 para terminar" << std::endl;
		std::cout << ">> ";

		switch (std::cin >> opcion, opcion) {
		case 1:
			Ejercicio1();
			break;

		case 2:
			Ejercicio2();
			break;

		case 3:
			Ejercicio3();
			break;

		case 4:
			Ejercicio4();
			break;

		case 5:
			Ejercicio5();
			break;

		case 6:
			std::cout << "Saliendo del programa..." << std::endl;
			break;

			return 0;
		default:
			std::cout << "Opcion no valida. Por favor, ingrese un numero del 1 al 6" << std::endl;
			continue;
		}
	}
}