#include <iostream>
int Ejercicio11() {
	const int N = 10;
	const int dias = 5;
	int asistencia[N][dias];
	int totalAsistencia[N] = {0};
	int asistenciaPorDia[dias] = {0};
	int personasAsistenciaCompleta = 0;
	std::cout << "Ingrese la asistencia de " << N << " personas durante " << dias << " dias (1 si asistio, 0 si no asistio):" << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cout << "Persona " << (i + 1) << ": ";
		for (int j = 0; j < dias; ++j) {
			std::cin >> asistencia[i][j];
			totalAsistencia[i] += asistencia[i][j];
			asistenciaPorDia[j] += asistencia[i][j];
		}
		if (totalAsistencia[i] == dias) {
			personasAsistenciaCompleta++;
		}
	}
	int diaMayorAsistencia = 0;
	for (int j = 1; j < dias; ++j) {
		if (asistenciaPorDia[j] > asistenciaPorDia[diaMayorAsistencia]) {
			diaMayorAsistencia = j;
		}
	}
	std::cout << "Asistencia total por persona:" << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cout << "Persona " << (i + 1) << ": " << totalAsistencia[i] << " dias" << std::endl;
	}
	std::cout << "Dia con mayor asistencia general: Dia " << (diaMayorAsistencia + 1) << " con " << asistenciaPorDia[diaMayorAsistencia] << " personas" << std::endl;
	std::cout << "Cantidad de personas con asistencia completa: " << personasAsistenciaCompleta << std::endl;
	return 0;
}

