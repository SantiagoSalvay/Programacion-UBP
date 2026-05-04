#include <iostream>

int Ejercicio_5() {
	float recaudacion, promedio, sueldo	;
	std::cout << "Ingrese la recaudacion mensual del chofer: $";
	std::cin >> recaudacion;
	promedio = recaudacion / 30;
	std::cout << "La recaudacion diaria promedio es: $" << promedio << std::endl;
	if (recaudacion > 1200) {
		sueldo = recaudacion * 0.3;
	} else {
		sueldo = recaudacion * 0.25;
	}
	if (promedio < 80) {
		std::cout << "El chofer debe ser reemplazado por tener una recaudacion diaria promedio menor a $80" << std::endl;
	}
	std::cout << "Su sueldo es: $" << sueldo << std::endl;
	return 0;
}