#include <iostream>

int Ejercicio10() {
	const int N = 10;
	int ventas[N];
	int total = 0;
	int maximo = 0;
	int diaMaximo = 0;
	int diasMenosDeTres = 0;
	std::cout << "Ingrese las unidades vendidas durante " << N << " dias:" << std::endl;
	for (int i = 0; i < N; ++i) {
		std::cout << "Dia " << (i + 1) << ": ";
		std::cin >> ventas[i];
		total += ventas[i];
		if (ventas[i] > maximo) {
			maximo = ventas[i];
			diaMaximo = i + 1;
		}
		if (ventas[i] < 3) {
			diasMenosDeTres++;
		}
	}
	std::cout << "Total vendido: " << total << " unidades" << std::endl;
	std::cout << "Dia con mayor venta: Dia " << diaMaximo << " con " << maximo << " unidades" << std::endl;
	std::cout << "Cantidad de dias con menos de 3 unidades vendidas: " << diasMenosDeTres << std::endl;
	return 0;
}

