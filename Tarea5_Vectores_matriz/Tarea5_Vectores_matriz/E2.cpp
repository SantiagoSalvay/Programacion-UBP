#include <iostream>

int	Ejercicio2() {
	const int N = 10;
	double temperaturas[N];
	int diasSuperiores25 = 0;
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese la temperatura maxima del dia " << (i + 1) << ": ";
		std::cin >> temperaturas[i];
		if (temperaturas[i] > 25.0) {
			diasSuperiores25++;
		}
	}
	std::cout << "Cantidad de dias que superaron los 25 C: " << diasSuperiores25 << std::endl;
	return 0;
}
