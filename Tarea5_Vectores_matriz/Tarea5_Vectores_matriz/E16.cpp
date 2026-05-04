#include <iostream>	

int Ejercicio16() {
	const int dias = 7;
	const int transportes = 4;
	int matriz[dias][transportes] = { 0 };
	int totalTransporte[transportes] = { 0 };
	int totalDia[dias] = { 0 };
	int transporteMasUtilizado = 0;
	int diaMayorMovilidad = 0;
	int maxUsoTransporte = 0;
	int maxMovilidadDia = 0;
	for (int i = 0; i < dias; ++i) {
		for (int j = 0; j < transportes; ++j) {
			std::cout << "Ingrese la cantidad de veces que se utilizo el medio de transporte " << j + 1 << " el dia " << i + 1 << ": ";
			std::cin >> matriz[i][j];
			totalTransporte[j] += matriz[i][j];
			totalDia[i] += matriz[i][j];
		}
	}
	for (int j = 0; j < transportes; ++j) {
		if (totalTransporte[j] > maxUsoTransporte) {
			maxUsoTransporte = totalTransporte[j];
			transporteMasUtilizado = j + 1;
		}
	}
	for (int i = 0; i < dias; ++i) {
		if (totalDia[i] > maxMovilidadDia) {
			maxMovilidadDia = totalDia[i];
			diaMayorMovilidad = i + 1;
		}
	}
	std::cout << "\nTotal por medio de transporte:\n";
	for (int j = 0; j < transportes; ++j) {
		std::cout << "Medio de transporte " << j + 1 << ": " << totalTransporte[j] << " usos\n";
	}
	std::cout << "\nTotal por dia:\n";
	for (int i = 0; i < dias; ++i) {
		std::cout << "Dia " << i + 1 << ": " << totalDia[i] << " usos\n";
	}
	std::cout << "\nEl medio de transporte mas utilizado es el Medio de Transporte " << transporteMasUtilizado
		<< " con un total de " << maxUsoTransporte << " usos.\n";
	std::cout << "\nEl dia con mayor movilidad es el Dia " << diaMayorMovilidad << " con un total de " << maxMovilidadDia << " usos.\n";
	return 0;
}

