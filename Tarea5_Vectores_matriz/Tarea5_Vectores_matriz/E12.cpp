#include <iostream>

int Ejercicio12() {
	const int N = 4;
	const int materias = 3;
	float notas[N][materias];
	float promedioEstudiante[N] = {0};
	float promedioMateria[materias] = {0};
	float notaMaxima = 0;
	int posicionMaxima[2] = {0, 0};
	std::cout << "Ingrese las notas de " << N << " estudiantes en " << materias << " materias:" << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cout << "Estudiante " << (i + 1) << ": ";
		for (int j = 0; j < materias; ++j) {
			std::cin >> notas[i][j];
			promedioEstudiante[i] += notas[i][j];
			promedioMateria[j] += notas[i][j];
			if (notas[i][j] > notaMaxima) {
				notaMaxima = notas[i][j];
				posicionMaxima[0] = i;
				posicionMaxima[1] = j;
			}
		}
		promedioEstudiante[i] /= materias;
	}
	for (int j = 0; j < materias; ++j) {
		promedioMateria[j] /= N;
	}
	std::cout << "Promedio por estudiante:" << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cout << "Estudiante " << (i + 1) << ": " << promedioEstudiante[i] << std::endl;
	}
	std::cout << "Promedio por materia:" << std::endl;
	for (int j = 0; j < materias; ++j) {
		std::cout << "Materia " << (j + 1) << ": " << promedioMateria[j] << std::endl;
	}
	std::cout << "Nota mas alta: " << notaMaxima << " en la posicion Estudiante " 
			  << (posicionMaxima[0] + 1) << ", Materia " 
			  << (posicionMaxima[1] + 1) << std::endl;
	return 0;
}

