#include <iostream>

int Ejercicio4() {
	const int N = 10;
	double* puntajes = new double[N];
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese el puntaje de la partida #" << (i + 1) << ": ";
		std::cin >> puntajes[i];
	}
	double puntajeMayor = puntajes[0];
	double puntajeMenor = puntajes[0];
	double sumaPuntajes = 0;
	for (int i = 0; i < N; ++i) {
		sumaPuntajes += puntajes[i];
		if (puntajes[i] > puntajeMayor) {
			puntajeMayor = puntajes[i];
		}
		if (puntajes[i] < puntajeMenor) {
			puntajeMenor = puntajes[i];
		}
	}
	double promedio = sumaPuntajes / N;
	int cantidadSuperioresPromedio = 0;
	for (int i = 0; i < N; ++i) {
		if (puntajes[i] > promedio) {
			++cantidadSuperioresPromedio;
		}
	}
	std::cout << "Puntaje mayor: " << puntajeMayor << std::endl;
	std::cout << "Puntaje menor: " << puntajeMenor << std::endl;
	std::cout << "Promedio: " << promedio << std::endl;
	std::cout << "Cantidad de puntajes superiores al promedio: " << cantidadSuperioresPromedio << std::endl;
	delete[] puntajes;
	return 0;
}
