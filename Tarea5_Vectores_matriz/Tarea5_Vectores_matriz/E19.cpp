#include <iostream>		

int Ejercicio19() {
	const int dias = 5;
	const int franjas = 4;
	int ocupacion[dias][franjas] = {0};
	int totalPorDia[dias] = {0};
	int totalPorFranja[franjas] = {0};
	std::cout << "Ingrese la ocupacion de la sala para cada dia y franja horaria:\n";
	for (int i = 0; i < dias; ++i) {
		for (int j = 0; j < franjas; ++j) {
			std::cout << "Dia " << (i + 1) << ", Franja " << (j + 1) << ": ";
			std::cin >> ocupacion[i][j];
			totalPorDia[i] += ocupacion[i][j];
			totalPorFranja[j] += ocupacion[i][j];
		}
	}
	std::cout << "\nTotal por dia:\n";
	for (int i = 0; i < dias; ++i) {
		std::cout << "Dia " << (i + 1) << ": " << totalPorDia[i] << " personas\n";
	}
	std::cout << "\nTotal por franja horaria:\n";
	for (int j = 0; j < franjas; ++j) {
		std::cout << "Franja " << (j + 1) << ": " << totalPorFranja[j] << " personas\n";
	}
	int maxOcupacion = totalPorFranja[0];
	int franjaMax = 0;
	for (int j = 1; j < franjas; ++j) {
		if (totalPorFranja[j] > maxOcupacion) {
			maxOcupacion = totalPorFranja[j];
			franjaMax = j;
		}
	}
	std::cout << "\nFranja con mayor ocupacion: Franja " << (franjaMax + 1) 
			  << " con " << maxOcupacion << " personas\n";
	int minOcupacion = totalPorDia[0];
	int diaMin = 0;
	for (int i = 1; i < dias; ++i) {
		if (totalPorDia[i] < minOcupacion) {
			minOcupacion = totalPorDia[i];
			diaMin = i;
		}
	}
	std::cout << "\nDia con menor ocupacion: Dia " << (diaMin + 1) 
			  << " con " << minOcupacion << " personas\n";

	return 0;
}