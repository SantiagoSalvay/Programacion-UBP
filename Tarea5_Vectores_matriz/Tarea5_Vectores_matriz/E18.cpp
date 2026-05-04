#include <iostream>

int	Ejercicio18() {
	const int SEMANAS = 4;
	const int DIAS = 7;
	double lluvias[SEMANAS][DIAS];
	double totalPorSemana[SEMANAS] = { 0 };
	double totalPorDia[DIAS] = { 0 };
	int diasSinLluvia = 0;
	int semanaMasLluviosa = 0;
	double maxLluvia = 0;
	for (int semana = 0; semana < SEMANAS; ++semana) {
		for (int dia = 0; dia < DIAS; ++dia) {
			std::cout << "Ingrese los milimetros de lluvia para la semana " << (semana + 1) << ", dia " << (dia + 1) << ": ";
			std::cin >> lluvias[semana][dia];
			totalPorSemana[semana] += lluvias[semana][dia];
			totalPorDia[dia] += lluvias[semana][dia];
			if (lluvias[semana][dia] == 0) {
				diasSinLluvia++;
			}
		}
		if (totalPorSemana[semana] > maxLluvia) {
			maxLluvia = totalPorSemana[semana];
			semanaMasLluviosa = semana;
		}
	}

	std::cout << "\nTotal de lluvia por semana:\n";
	for (int semana = 0; semana < SEMANAS; ++semana) {
		std::cout << "Semana " << (semana + 1) << ": " << totalPorSemana[semana] << " mm\n";
	}
	std::cout << "\nTotal de lluvia por dia de la semana:\n";
	for (int dia = 0; dia < DIAS; ++dia) {
		std::cout << "Dia " << (dia + 1) << ": " << totalPorDia[dia] << " mm\n";
	}
	std::cout << "\nLa semana mas lluviosa fue la semana " << (semanaMasLluviosa + 1) << " con un total de " << maxLluvia << " mm.\n";
	std::cout << "Cantidad de dias sin lluvia: " << diasSinLluvia << std::endl;
	return 0;
}