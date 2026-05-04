#include <iostream>

int Ejercicio17() {
	const int N = 10; 
	const int ejercicios = 3; 
	int resultados[N][ejercicios]; 
	std::cout << "Ingrese los resultados de " << N << " entrenamientos para abdominales, flexiones y sentadillas:\n";
	for (int i = 0; i < N; ++i) {
		std::cout << "Entrenamiento " << (i + 1) << ":\n";
		for (int j = 0; j < ejercicios; ++j) {
			std::cout << "Ejercicio " << (j + 1) << ": ";
			std::cin >> resultados[i][j];
		}
	}
	int totalPorEjercicio[ejercicios] = {0};
	double promedioPorEjercicio[ejercicios] = {0.0};
	int mayorRendimientoTotal = 0;
	int entrenamientoMayorRendimiento = 0;
	for (int j = 0; j < ejercicios; ++j) {
		for (int i = 0; i < N; ++i) {
			totalPorEjercicio[j] += resultados[i][j];
		}
		promedioPorEjercicio[j] = static_cast<double>(totalPorEjercicio[j]) / N;
	}
	for (int i = 0; i < N; ++i) {
		int rendimientoTotal = 0;
		for (int j = 0; j < ejercicios; ++j) {
			rendimientoTotal += resultados[i][j];
		}
		if (rendimientoTotal > mayorRendimientoTotal) {
			mayorRendimientoTotal = rendimientoTotal;
			entrenamientoMayorRendimiento = i + 1; 
		}
	}
	std::cout << "\nResultados:\n";
	for (int j = 0; j < ejercicios; ++j) {
		std::cout << "Ejercicio " << (j + 1) << " - Total: " << totalPorEjercicio[j]
		          << ", Promedio: " << promedioPorEjercicio[j] << "\n";
	}
	std::cout << "Entrenamiento con mayor rendimiento total: " << entrenamientoMayorRendimiento
	          << " (Total: " << mayorRendimientoTotal << ")\n";
	return 0;
}

