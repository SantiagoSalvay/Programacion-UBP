#include <iostream>	

int Ejercicio9() {
	const int N = 10;
	double kilometros[N];
	double total = 0.0;
	double maximo = 0.0;
	double minimo = 0.0;
	std::cout << "Ingrese los kilometros caminados durante " << N << " dias:" << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cout << "Dia " << (i + 1) << ": ";
		std::cin >> kilometros[i];
		total += kilometros[i];
		if (i == 0) {
			maximo = kilometros[i];
			minimo = kilometros[i];
		} else {
			if (kilometros[i] > maximo) {
				maximo = kilometros[i];
			}
			if (kilometros[i] < minimo) {
				minimo = kilometros[i];
			}
		}
	}
	double promedio = total / N;
	double diferencia = maximo - minimo;
	std::cout << "Total recorrido: " << total << " km" << std::endl;
	std::cout << "Promedio: " << promedio << " km" << std::endl;
	std::cout << "Valor maximo: " << maximo << " km" << std::endl;
	std::cout << "Valor minimo: " << minimo << " km" << std::endl;
	std::cout << "Diferencia entre el maximo y el minimo: " << diferencia << " km" << std::endl;
	return 0;
}

