#include <iostream>

int Ejercicio4() {
	std::cout << "Numeros del 10 al 1 en orden descendente:" << std::endl;
	for (int i = 10; i >= 1; --i) {
		std::cout << i << " ";
	}
	std::cout << std::endl;
	return 0;
}