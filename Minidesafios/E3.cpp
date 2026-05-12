#include <iostream>
#include <string>

int Ejercicio3() {
	struct Producto {
		int codigo;
		std::string nombre;
		float precio;
		int stock;
	};
	Producto productos[3];
	for (int i = 0; i < 3; ++i) {
		std::cout << "Ingrese el codigo del producto " << (i + 1) << ": ";
		std::cin >> productos[i].codigo;
		std::cin.ignore(); 
		std::cout << "Ingrese el nombre del producto " << (i + 1) << ": ";
		std::getline(std::cin, productos[i].nombre);
		std::cout << "Ingrese el precio del producto " << (i + 1) << ": ";
		std::cin >> productos[i].precio;
		std::cout << "Ingrese el stock del producto " << (i + 1) << ": ";
		std::cin >> productos[i].stock;
	}
	int maxStockIndex = 0;
	for (int i = 1; i < 3; ++i) {
		if (productos[i].stock > productos[maxStockIndex].stock) {
			maxStockIndex = i;
		}
	}
	std::cout << "El producto con mayor stock disponible es: " << productos[maxStockIndex].nombre
			  << " con un stock de " << productos[maxStockIndex].stock << std::endl;
	return 0;
}