#include <iostream>

int Ejercicio20() {
	const int N = 10;
	int visitas[N][3] = {0};
	int totalPorPuesto[N] = {0};
	int totalPorMomento[3] = {0};
	int totalGeneral = 0;
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese la cantidad de personas que visitaron el puesto " << i + 1 << " en la manana: ";
		std::cin >> visitas[i][0];
		std::cout << "Ingrese la cantidad de personas que visitaron el puesto " << i + 1 << " en la tarde: ";
		std::cin >> visitas[i][1];
		std::cout << "Ingrese la cantidad de personas que visitaron el puesto " << i + 1 << " en la noche: ";
		std::cin >> visitas[i][2];
		totalPorPuesto[i] = visitas[i][0] + visitas[i][1] + visitas[i][2];
		totalGeneral += totalPorPuesto[i];
		for (int j = 0; j < 3; ++j) {
			totalPorMomento[j] += visitas[i][j];
		}
	}
	int puestoMasVisitado = 0;
	for (int i = 1; i < N; ++i) {
		if (totalPorPuesto[i] > totalPorPuesto[puestoMasVisitado]) {
			puestoMasVisitado = i;
		}
	}
	int momentoMayorConcurrencia = 0;
	for (int j = 1; j < 3; ++j) {
		if (totalPorMomento[j] > totalPorMomento[momentoMayorConcurrencia]) {
			momentoMayorConcurrencia = j;
		}
	}
	std::cout << "\nTotal por puesto:\n";
	for (int i = 0; i < N; ++i) {
		std::cout << "Puesto " << i + 1 << ": " << totalPorPuesto[i] << " visitantes\n";
	}
	std::cout << "\nTotal por momento del dia:\n";
	std::cout << "Manana: " << totalPorMomento[0] << " visitantes\n";
	std::cout << "Tarde: " << totalPorMomento[1] << " visitantes\n"; 
	std::cout << "Noche: " << totalPorMomento[2] << " visitantes\n"; 
	std::cout << "\nPuesto mas visitado: Puesto " << puestoMasVisitado + 1 << "\n";
	std::cout << "Momento del dia con mayor concurrencia: " << (momentoMayorConcurrencia == 0 ? "Manana" : momentoMayorConcurrencia == 1 ? "Tarde" : "Noche") << "\n";
	return 0;
}

