#include <iostream>

int Ejercicio2() {
	int N;
	std::cout << "Ingrese un numero N: ";
	std::cin >> N;
	int suma = 0;
	for (int i = 1; i <= N; i++) {
		suma += i;
	}
	std::cout << "La suma de los primeros " << N << " numeros naturales es: " << suma << std::endl;
	return 0;
}