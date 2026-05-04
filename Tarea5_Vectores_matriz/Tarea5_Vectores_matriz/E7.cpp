#include <iostream>

int Ejercicio7() {
	const int N = 10;
	int paginasLeidas[N];
	int total = 0;
	int diaMayorLectura = 0;
	int maxPaginas = 0;
	int diasMenosDeDiez = 0;
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese la cantidad de paginas leidas el dia " << (i + 1) << ": ";
		std::cin >> paginasLeidas[i];
		total += paginasLeidas[i];
		if (paginasLeidas[i] > maxPaginas) {
			maxPaginas = paginasLeidas[i];
			diaMayorLectura = i + 1;
		}
		if (paginasLeidas[i] < 10) {
			diasMenosDeDiez++;
		}
	}
	double promedio = static_cast<double>(total) / N;
	std::cout << "Total de paginas leidas: " << total << std::endl;
	std::cout << "Promedio diario de paginas leidas: " << promedio << std::endl;
	std::cout << "Dia de mayor lectura: Dia " << diaMayorLectura << " con " << maxPaginas << " paginas." << std::endl;
	std::cout << "Cantidad de dias con menos de 10 paginas leidas: " << diasMenosDeDiez << std::endl;
	return 0;
}
