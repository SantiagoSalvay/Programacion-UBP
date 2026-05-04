#include <iostream>

int Ejercicio14() {
	const int N = 4;
	int matriz[N][7] = {0};
	int totalArtefacto[N] = {0};
	int totalDia[7] = {0};
	int artefactoMasUtilizado = 0;
	int maxUso = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < 7; ++j) {
			std::cout << "Ingrese las horas de uso del artefacto " << i + 1 << " en el dia " << j + 1 << ": ";
			std::cin >> matriz[i][j];
			totalArtefacto[i] += matriz[i][j];
			totalDia[j] += matriz[i][j];
		}
	}
	for (int i = 0; i < N; ++i) {
		if (totalArtefacto[i] > maxUso) {
			maxUso = totalArtefacto[i];
			artefactoMasUtilizado = i + 1;
		}
	}
	std::cout << "\nTotal por artefacto:\n";
	for (int i = 0; i < N; ++i) {
		std::cout << "Artefacto " << i + 1 << ": " << totalArtefacto[i] << " horas\n";
	}
	std::cout << "\nTotal por dia:\n";
	for (int j = 0; j < 7; ++j) {
		std::cout << "Dia " << j + 1 << ": " << totalDia[j] << " horas\n";
	}
	std::cout << "\nEl artefacto mas utilizado en la semana es el Artefacto " << artefactoMasUtilizado 
			  << " con un total de " << maxUso << " horas.\n";
	return 0;
}

