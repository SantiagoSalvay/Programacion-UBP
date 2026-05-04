#include <iostream>

int Ejercicio15() {
	const int dias = 5;
	const int comidas = 3;
	int matriz[dias][comidas] = { 0 };
	int totalDia[dias] = { 0 };
	int totalComida[comidas] = { 0 };
	int diaMayorDemanda = 0;
	int comidaMasSolicitada = 0;
	int maxDemandaDia = 0;
	int maxSolicitudesComida = 0;
	for (int i = 0; i < dias; ++i) {
		for (int j = 0; j < comidas; ++j) {
			std::cout << "Ingrese la cantidad de porciones servidas el dia " << i + 1 << " para la comida " << j + 1 << ": ";
			std::cin >> matriz[i][j];
			totalDia[i] += matriz[i][j];
			totalComida[j] += matriz[i][j];
		}
	}
	for (int i = 0; i < dias; ++i) {
		if (totalDia[i] > maxDemandaDia) {
			maxDemandaDia = totalDia[i];
			diaMayorDemanda = i + 1;
		}
	}
	for (int j = 0; j < comidas; ++j) {
		if (totalComida[j] > maxSolicitudesComida) {
			maxSolicitudesComida = totalComida[j];
			comidaMasSolicitada = j + 1;
		}
	}
	std::cout << "\nTotal por dia:\n";
	for (int i = 0; i < dias; ++i) {
		std::cout << "Dia " << i + 1 << ": " << totalDia[i] << " porciones\n";
	}
	std::cout << "\nTotal por tipo de comida:\n";
	for (int j = 0; j < comidas; ++j) {
		std::cout << "Comida " << j + 1 << ": " << totalComida[j] << " porciones\n";
	}
	std::cout << "\nEl dia de mayor demanda es el Dia " << diaMayorDemanda
		<< " con un total de " << maxDemandaDia << " porciones.\n";

	std::cout << "\nLa comida mas solicitada es la Comida " << comidaMasSolicitada
		<< " con un total de " << maxSolicitudesComida << " porciones.\n";
	return 0;
}