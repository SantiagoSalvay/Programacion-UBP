#include <iostream>

int Ejercicio9() {
	int numero;
	int suma = 0;
	std::cout << "Ingrese numeros aleatorios y un negativo para terminar:" << std::endl;
	while (true) {
		std::cout << "Numero: ";
		std::cin >> numero;
		if (numero < 0) {
			break; 
		}
		suma += numero; 
	}
	std::cout << "La suma de los numeros ingresados es: " << suma << std::endl;
	return 0;
}