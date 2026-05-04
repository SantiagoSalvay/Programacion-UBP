#include <iostream>

int Ejercicio1() {
	const int N = 10; 
	int vasos[N]; 
	int total = 0; 
	int diaMayor = 0; 
	int diaMenor = 0; 
	for (int i = 0; i < N; i++) {
		std::cout << "Ingrese la cantidad de vasos consumidos el dia " << (i + 1) << ": ";
		std::cin >> vasos[i];
		total += vasos[i]; 
		if (i == 0 or vasos[i] > vasos[diaMayor]) {
			diaMayor = i; 
		}
		if (i == 0 or vasos[i] < vasos[diaMenor]) {
			diaMenor = i; 
		}
	}
	double promedio = static_cast<double>(total) / N; // " aclaracion: static_cast<double> convierte al total en un valor de tipo double para que el promedio sea un valor decimal"
	std::cout << "Total consumido: " << total << " vasos" << std::endl;
	std::cout << "Promedio diario: " << promedio << " vasos" << std::endl;
	std::cout << "Dia de mayor consumo: Dia " << (diaMayor + 1) << " con " << vasos[diaMayor] << " vasos" << std::endl;
	std::cout << "Dia de menor consumo: Dia " << (diaMenor + 1) << " con " << vasos[diaMenor] << " vasos" << std::endl;
	return 0;
}


