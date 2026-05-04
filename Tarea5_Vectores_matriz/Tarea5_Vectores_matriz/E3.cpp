// del sigueinte problema tiene que : escribir datos de entrada, proeso y resutlados esperados, un pseudocodigo redactado en priemra persona con leange natural y nada de codigo, especificar que estrucuturas usaste( vector o matriz) , expkicar xq lo usaste y qu problemas se te sugieron , escribe todo estoi en priemra persona y en lenaguje natural como humano y abajo de tood el codigo , no quier ver comentarios en el codigo. el problema es:


#include <iostream>

int Ejercicio3() {
	const int N = 10;
	double* gastos = new double[N];  // Aca creo un arreglo dinamico para almacenar los gastos
	for (int i = 0; i < N; ++i) {
		std::cout << "Ingrese el gasto #" << (i + 1) << ": ";
		std::cin >> gastos[i];
	}
	double totalGastado = 0;
	int gastosMayores5000 = 0;
	double gastoMasAlto = 0;
	int posicionGastoMasAlto = -1;
	for (int i = 0; i < N; ++i) {
		totalGastado += gastos[i];
		if (gastos[i] > 5000) {
			++gastosMayores5000;
		}
		if (gastos[i] > gastoMasAlto) {
			gastoMasAlto = gastos[i];
			posicionGastoMasAlto = i;
		}
	}
	std::cout << "Total gastado: $" << totalGastado << std::endl;
	std::cout << "Cantidad de gastos mayores a $5000: " << gastosMayores5000 << std::endl;
	std::cout << "Gasto mas alto: $" << gastoMasAlto << std::endl;
	std::cout << "Posicion del gasto mas alto: " << posicionGastoMasAlto + 1 << std::endl;
	delete[] gastos; // Aca libero memoria
	return 0;
}