#include <iostream>

int Ejercicio13() {
	const int N = 10;
	int ventas[3][N];
	int totalSucursal[3] = {0};
	int totalProducto[N] = {0};
	int mayorVenta = 0;
	int sucursalMayor = 0;
	for (int i = 0; i < 3; i++) {
		std::cout << "Ingrese las cantidades vendidas para la sucursal " << i + 1 << ":" << std::endl;
		for (int j = 0; j < N; j++) {
			std::cout << "Producto " << j + 1 << ": ";
			std::cin >> ventas[i][j];
			totalSucursal[i] += ventas[i][j];
			totalProducto[j] += ventas[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		std::cout << "Total de ventas para la sucursal " << i + 1 << ": " << totalSucursal[i] << std::endl;
		if (totalSucursal[i] > mayorVenta) {
			mayorVenta = totalSucursal[i];
			sucursalMayor = i + 1;
		}
	}
	for (int j = 0; j < N; j++) {
		std::cout << "Total de ventas para el producto " << j + 1 << ": " << totalProducto[j] << std::endl;
	}
	std::cout << "La sucursal con mayor venta total es la sucursal " << sucursalMayor << " con un total de " << mayorVenta << std::endl;
	return 0;
}

