#include <iostream>	

int Ejercicio5() {
	const int N = 10;
	int horas[N];
	int totalHoras = 0;
	int diasMasDeCuatro = 0;
	for (int i = 0; i < N; i++) {
		std::cout << "Ingrese las horas de uso del celular para el dia " << (i + 1) << ": ";
		std::cin >> horas[i];
		totalHoras += horas[i];
		if (horas[i] > 4) {
			diasMasDeCuatro++;
		}
	}
	double promedio = static_cast<double>(totalHoras) / N;
	std::cout << "Total de horas: " << totalHoras << std::endl;
	std::cout << "Promedio de horas: " << promedio << std::endl;
	std::cout << "Cantidad de dias con mas de 4 horas de uso: " << diasMasDeCuatro << std::endl;
	return 0;
}