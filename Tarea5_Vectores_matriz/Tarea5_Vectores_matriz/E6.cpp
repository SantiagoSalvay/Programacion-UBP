#include <iostream>

int Ejercicio6() {
	const int N = 10;
	int produccion[N];
	int total = 0;
	int diasCero = 0;
	int diasBajoPromedio = 0;
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese la cantidad de unidades producidas el dia " << (i + 1) << ": ";
		std::cin >> produccion[i];
		total += produccion[i];
		if (produccion[i] == 0) {
			diasCero++;
		}
	}
	double promedio = static_cast<double>(total) / N;
	for (int i = 0; i < N; ++i) {
		if (produccion[i] < promedio) {
			diasBajoPromedio++;
		}
	}
	std::cout << "Total producido: " << total << std::endl;
	std::cout << "Promedio diario: " << promedio << std::endl;
	std::cout << "Dias con produccion 0: " << diasCero << std::endl;
	std::cout << "Cantidad de dias por debajo del promedio: " << diasBajoPromedio << std::endl;
	return 0;
}