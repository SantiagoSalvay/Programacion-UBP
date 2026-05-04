#include <iostream>			
#include "Ejercicios.h"

int main() {
	int opcion = 0;
	while (opcion != 21) {
		std::cout << "Ingrese el numero del ejercicio para ejecutarlo e ingrese el numero 21 para terminar" << std::endl;
		std::cout << ">> ";

		switch (std::cin >> opcion, opcion) {
			case 1:
				Ejercicio1();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 2:
				Ejercicio2();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 3:
				Ejercicio3();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 4:
				Ejercicio4();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 5:
				Ejercicio5();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 6:
				Ejercicio6();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 7:
				Ejercicio7();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 8:
				Ejercicio8();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 9: 
				Ejercicio9();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 10: 
				Ejercicio10();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 11:
				Ejercicio11();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 12:
				Ejercicio12();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 13:
				Ejercicio13();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;
			case 14:
				Ejercicio14();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 15:
				Ejercicio15();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 16:
				Ejercicio16();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 17:
				Ejercicio17();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 18:
				Ejercicio18();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 19:
				Ejercicio19();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 20:
				Ejercicio20();
				std::cout << "-----------------------------------------------------------------------------" << std::endl;
				break;

			case 21:
				std::cout << "Saliendo del programa..." << std::endl;
				break;
		
			return 0;
		default:
			std::cout << "Opcion no valida. Por favor, ingrese un numero del 1 al 20." << std::endl;
			continue;
		}
	}
}